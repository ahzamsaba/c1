// buzz_number.cpp

#include <bits/stdc++.h>

using namespace std;

bool is_buzz(int num) {
    // Write Function Only
    return (num%7==0) || (num%10==7);
    // Test 1
    // Test 2
    // Test 3
    // abc d
    // abcde
    // Test Again
}

void run_test_cases() {
    // Test case 1: Buzz number
    assert(is_buzz(7) == true);

    // Test case 2: Non-Buzz number
    assert(is_buzz(8) == false);

    // Test case 3: Buzz number ending with 7
    assert(is_buzz(17) == true);

    // Test case 4: Non-Buzz number
    assert(is_buzz(22) == false);

    // Add more test cases as needed

    cout << "All test cases passed!" << endl;
}

int main() {
    // Run the test cases
    run_test_cases();

    // Prompt the user to enter a number
    cout << "Enter a number to check for Buzz: ";
    int num;
    cin >> num;

    // Check and display the result
    if (is_buzz(num)) {
        cout << num << " is a Buzz number." << endl;
    } else {
        cout << num << " is not a Buzz number." << endl;
    }

    return 0;
}
