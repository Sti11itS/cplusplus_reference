#include <iostream>

int sum(int k) {
        if (k > 0) {
            return k + sum(k - 1);
        } else {
            return 0;
        }
}

int factorial(int n) {
        if (n > 1) {
            return n * factorial(n - 1);
        } else {
            return 1;
        }
}

void countdown(int j) {
        if (j > 0) {
            std::cout << j << std::endl;
            countdown(j - 1);
        }
}


int main() {
        int inputSum, resultSum, inputFac, resultFac;

        // Get user input summation value k
        std::cout << "Input summation value k: ";
        std::cin >> inputSum;

        // Get user input factorial value n
        std::cout << "Input factorial value n: ";
        std::cin >> inputFac;

        // Start the countdown
        std::cout << "Let's get this show on the road!!!" << std::endl;
        countdown(5);

        std::cout << "Summation of " << inputSum << " is " << sum(inputSum) << std::endl;
        std::cout << "Factorial of " << inputFac << " is " << factorial(inputFac) << std::endl;

        return 0;
}

