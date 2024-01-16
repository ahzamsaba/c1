// prime_checker.cpp

#include <iostream>
#include <cassert>
#include <cmath>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= static_cast<int>(sqrt(num)); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void test_is_prime() {
    // Test case 1: Prime number
    assert(is_prime(5) == true);

    // Test case 2: Non-prime number
    assert(is_prime(6) == false);

    // Test case 3: Prime number (border case)
    assert(is_prime(2) == true);

    // Test case 4: Non-prime number (border case)
    assert(is_prime(0) == false);

    // Test case 5: Non-prime number (border case)
    assert(is_prime(1) == false);

    std::cout << "All test cases passed!" << std::endl;
}

int main() {
    // Run the test cases
    test_is_prime();

    // Example usage
    int num_to_check;
    std::cout << "Enter a number to check for prime: ";
    std::cin >> num_to_check;

    if (is_prime(num_to_check)) {
        std::cout << num_to_check << " is a prime number." << std::endl;
    } else {
        std::cout << num_to_check << " is not a prime number." << std::endl;
    }

    return 0;
}
