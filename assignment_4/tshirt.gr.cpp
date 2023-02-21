// Program prompts the user for the number of shirts required and then computes the total price.
// Program accepts only non-negative input.
// Created by Greg Rodriguez on 2/21/23.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double total;
    double discount = 0;
    double shirtPrice = 12;
    int userNumber;

    cout << "\nHow many shirts would you like?" << endl;
    cin >> userNumber;

    if (userNumber < 0) {
        cout << "Invalid Input: Please enter a non-negative integer." << endl;
    }

    if ( userNumber >= 0) {
        if (userNumber <= 4) {
            discount = 0;
        } else if (userNumber >= 5 && userNumber <= 10) {
            discount = .10;
        } else if (userNumber >= 11 && userNumber <= 20) {
            discount = .15;
        } else if (userNumber >= 21 && userNumber <= 30) {
            discount = .20;
        } else {
            discount = .25;
        }
        shirtPrice = shirtPrice - (shirtPrice * discount);
        total = shirtPrice * userNumber;
        cout << fixed << setprecision(2);
        cout << "The cost per shirt is $" << shirtPrice << " and the total cost is $" << total << endl;
    }

    return 0;
}
