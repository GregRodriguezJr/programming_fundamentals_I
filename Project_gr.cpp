//
// Created by Greg Rodriguez on 4/13/23.
//

#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

double getRandomNum();                      // generates random number
double getPayment(double);                  // gets user input for payment
double calcChange(double, double );         // calculates change
void printResults(double, double, double);  // prints results

int main() {
    double randomNum; // holds random number value
    double payment;   // holds payment amount
    double change;    // holds change amount

    cout << fixed << showpoint << setprecision(2); // set decimal point

    cout << "*************" << endl;
    cout << "*  Welcome  *" << endl;
    cout << "*************" << endl;

    randomNum = getRandomNum();
    cout << "\nAmount to be paid: $" << randomNum << endl << endl;

    payment = getPayment(randomNum);
    change = calcChange(payment, randomNum);

    printResults(randomNum, payment, change);

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
double getPayment(double randomNum) {
    int payment;
    bool validInput = false;

    while(!validInput) {
        cout << "Payment must be 1, 5, 10, or 20" << endl;
        cout << "Enter payment amount: $" ;
        cin >> payment;

        if (payment < randomNum) {
            cout << "Payment amount is not enough" << endl;
        } else if(payment == 1 || payment == 5 ||payment == 10 ||payment == 20) {
            validInput = true;
        } else {
            cout << "Invalid entry, please try again" << endl;
        }
    }
    return payment;
}

// function calculates the change
double calcChange(double payment, double randomNum){
    return payment - randomNum;
}

// function prints results
void printResults(double randomNum, double payment, double change) {
    cout << "The amount to be paid: $" << randomNum << endl;
    cout << "Payment amount entered: $" << payment << endl;
    cout << "Total change: $" << change << endl;
}