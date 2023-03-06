
// Created by Greg Rodriguez

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    // Prompt user for positive number
    cout << "\nPlease enter a positive number:" << endl;
    // Capture input and store in variable
    cin >> num;

    // Validate input
    while (num < 1) {
        cout << "\nInvalid entry, please enter a positive number:" << endl;
        cin >> num;
    }

    // for loop to calculate sum
    for (int i = 1; i <= num; ++i) {
        sum += i;
    }

    // print result
    cout << "The sum of the numbers is " << sum << endl;

    return 0;
}