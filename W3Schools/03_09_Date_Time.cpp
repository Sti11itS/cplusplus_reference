#include <iostream>
#include <ctime>

// <ctime> library allows working with date and time
//
// DataTypes provided by <ctime> are: `time_t` for timestamps and 
// `struct tm` for datetime structures.
//
// `Timestamps` are unixtime; a single number counting from 1st Jan 1970.
//
// `Datetime` structures are structures that represent different components of the date
// and time as members. Makes things easier. It has the following members:
//      tm_sec - Seconds
//      tm_min - Minute
//      tm_hour - Hour (0-23)
//      tm_mday - Day of the Month
//      tm_mon - Month (0-11 starting with January)
//      tm_year - Years since 1900 <-----**************
//      tm_wday - Weekday (0-6 starting with Sunday)
//      tm_yday - Day of the Year (0-365 with 0 being 01 January)
//      tm_isdst - +ve when DST is in effect, 0 when not, -ve when unknown
//
// Function time() returns the current unixtime value of datatype `time_t` to 
// the ***MEMORY LOCATION*** of the `time_t` object in the argument.
//      - The parameter requires a `pointer` object pointing to the address of `time_t` object
//      - i.e. the memory address of the `time_t` object is required.
//
// Function mktime() converts a `datetype structure` object into `time_t` unixtime
// The structure object must have the following values:
//      tm_year, tm_mon, tm_mday, tm_hour, tm_min, tm_sec and tm_isdst
// The mktime() function also fills the tm_wday and tm_yday members with the correct values.
//
// Functions localtime() and gmtime() convert unixtimestamps into datetime structures
// They require pointer objects or memory address of time_t object
// localtime() returns a *pointer* to datetime struct representing time in computer's timezone.
// gmtime() returns a *pointer* to datetime struct representing time in GMT timezone
//
// Function ctime() returns human readable datetime from time_t object
// Function asctime() returns human readable datetime from struct tm object
// As usual, both require pointer objects or memory addresses as arguments
// Note: asctime() does not correct invalid dates, use mktime() to validate
//
// Function strftime() returns custom string format of human readable struct tm object pointer
// Refer to online references for list of specifiers
//
// Function difftime() returns number of seconds (in datatype double) between time_t end 
// and time_t begin.
// Function clock() returns clock ticks in datatype `clock_t`. Related to processing time 
// used by the program. Divide by `CLOCKS_PER_SEC` to convert into seconds.


int main() {

        // Section 0
        // Intro
        // Get unixtime for current date and time using time_t object and time()
        time_t timestamp;                       // Create dataType `time_t` provided by <ctime>
        time(&timestamp);                       // Use time() Fn from <ctime> to write
                                                // unixtime to memory location of given object
                                                // in argument
        // time_t timestamp = time(NULL)        // Second way to get unixtime
        // Value of unixtime at current time
        std::cout << "Current unixtime timestamp: " << timestamp << std::endl;
        // Memory address of object `timestamp`
        std::cout << "Memory address of time_t object `timestamp`: " << &timestamp << std::endl;   
        // Display the date and time represented by the timestamp
        // ctime() Fn converts unixtime to human time
        std::cout << "Current human readable timestamp: " << ctime(&timestamp) << std::endl;         

        
        // Section 1
        // Creating Custom Timestamps
        // Creating struct tm
        struct tm myDateTimeStruct;
        time_t myTimeStamp;
        // Populating the struct tm object myDateTimeStruct
        myDateTimeStruct.tm_year = 2025 - 1900; // From 1900, NOT 1970
        myDateTimeStruct.tm_mon = 8 - 1;        // Number of months since January
        myDateTimeStruct.tm_mday = 28;
        myDateTimeStruct.tm_hour = 22;
        myDateTimeStruct.tm_min = 19;
        myDateTimeStruct.tm_sec = 10;
        myDateTimeStruct.tm_isdst = -1;         // Daylight savings must be specified
                                                // -1 uses computer's timezone setting
        myTimeStamp = mktime(&myDateTimeStruct);// mktime() wants the pointer to the struct tm
                                                // object, or the memory address of the struct 
                                                // tm itself.
        std::cout << "Custom timestamp from mktime(): " << ctime(&myTimeStamp) << std::endl;


        // Section 2
        // Creating and using DateTime Structures
        // Create datetime structure and use mktime() to fill missing numbers
        // Find a weekday of a specified date
        struct tm myDateTimeStruct2;
        myDateTimeStruct2.tm_year = 2025 - 1900;// Number of years since 1900
        myDateTimeStruct2.tm_mon = 9 - 1;       // Number of months since January
        myDateTimeStruct2.tm_mday = 1;
        myDateTimeStruct2.tm_hour = 0; myDateTimeStruct2.tm_min = 0; myDateTimeStruct2.tm_sec = 0;
        myDateTimeStruct2.tm_isdst = -1;
        mktime(&myDateTimeStruct2);

        std::string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", \
                                  "Friday", "Saturday"};
        std::cout << "The date is on a " << weekdays[myDateTimeStruct2.tm_wday] << std::endl;


        // Section 3
        // Using localtime() and gmtime()
        time_t myTimeStamp3 = time(&myTimeStamp3);
        struct tm myLocalTimeStruct3 = *localtime(&myTimeStamp3);
        struct tm myGMTTimeStruct3 = *gmtime(&myTimeStamp3);
        std::cout << std::endl;
        std::cout << "The Local Time hour is: " << myLocalTimeStruct3.tm_hour << "HR" << std::endl;
        std::cout << "The GMT hour is: " << myGMTTimeStruct3.tm_hour << "HR" << std::endl;

        // Section 3.1
        // Using asctime()
        std::cout << "Using asctime() to display human readable datetime from struct tm: ";
        std::cout << std::endl << asctime(&myLocalTimeStruct3) << std::endl;

        // Section 3.2
        // Using strftime()
        char output[50];
        std::cout << "Using strftime() to create custom time formats: " << std::endl;

        strftime(output, 50, "%B %e, %Y", &myLocalTimeStruct3);
        std::cout << "%B %e, %Y: \t\t" << output << std::endl;

        strftime(output, 50, "%I:%M:%S %p", &myLocalTimeStruct3);
        std::cout << "%I:%M:%S %p: \t\t" << output << std::endl;

        strftime(output, 50, "%d/%m/%y", &myLocalTimeStruct3);
        std::cout << "%d/%m/%y: \t\t" << output << std::endl;

        strftime(output, 50, "%a %b %e %H:%M:%S %Y", &myLocalTimeStruct3);
        std::cout << "%a %b %e %H:%M:%S %Y: \t" << output << std::endl;


        // Section 3.3
        // Using mktime() to correct invalid info in struct tm objects before asctime()
        struct tm myDateTimeStruct3;
        myDateTimeStruct3.tm_year = 2025 - 1900;
        myDateTimeStruct3.tm_mon = 1 - 1;
        myDateTimeStruct3.tm_mday = 33;         // Day of month set to 33rd
        myDateTimeStruct3.tm_hour = 0; myDateTimeStruct3.tm_min = 0; myDateTimeStruct3.tm_sec = 0;
        myDateTimeStruct3.tm_isdst = -1;
        mktime(&myDateTimeStruct3);             // Validate and correct the struct tm object
        
        std::cout << std::endl;
        std::cout << "Using mktime() to validate and correct struct tm object before asctime(): ";
        std::cout << std::endl << asctime(&myDateTimeStruct3) << std::endl;


        // Section 4
        // difftime()
        time_t myNow;
        time_t myNextYear;
        struct tm myDTStruct4;

        myNow = time(NULL);               // Faster way to get unixtimestamp
        myDTStruct4 = *localtime(&myNow); // Remember to dereference the pointer value
        myDTStruct4.tm_year = myDTStruct4.tm_year + 1;
        myDTStruct4.tm_mon = 0;
        myDTStruct4.tm_mday = 1;
        myDTStruct4.tm_hour = 0; myDTStruct4.tm_min = 0; myDTStruct4.tm_sec = 0;
        myDTStruct4.tm_isdst = -1;      // Local Computer timezone
        myNextYear = mktime(&myDTStruct4);

        int myDiff = difftime(myNextYear, myNow);

        std::cout << std::endl << myDiff << " seconds until next year." << std::endl;

        // clock()
        clock_t before = clock();
        int k = 0;
        for (int i = 0; i < 100000; i++) {
            k += 1;
        }
        clock_t duration = clock() - before;
        std::cout << std::endl << "Duration: " << duration << " clock ticks, (";
        std::cout << (float)duration/CLOCKS_PER_SEC << " seconds)" << std::endl;


        return 0;
}

