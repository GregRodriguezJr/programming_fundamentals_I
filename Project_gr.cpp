//
// Created by Greg Rodriguez on 4/13/23.
//

#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

double getRandomNum(); // generates random number
int getPayment(); // gets user input for payment

int main() {
    double randomNum; // holds random number value
    int payment; // holds payment amount

    cout << fixed << showpoint << setprecision(2); // set decimal point

    cout << "*************" << endl;
    cout << "*  Welcome  *" << endl;
    cout << "*************" << endl;

    randomNum = getRandomNum();
    cout << "\nAmount to be paid: $" << randomNum << endl << endl;

    payment = getPayment();

    cout << payment << endl;

    return 0;
};

// function uses three classes from the <random> library
double getRandomNum() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.01, 20.00);
    return dis(gen);
}

// function prints messages and gets user input with validation
int getPayment() {
    int payment;
    bool validInput = false;

    while(!validInput) {
        cout << "Payment must be 1, 5, 10, or 20" << endl;
        cout << "Enter payment amount: $" ;
        cin >> payment;

        if(payment == 1 || payment == 5 ||payment == 10 ||payment == 20) {
            validInput = true;
        } else {
            cout << "Invalid entry, please try again" << endl;
        }
    }
    return payment;
}