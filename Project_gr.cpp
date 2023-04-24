//
// Created by Greg Rodriguez on 4/19/23.
//

#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

typedef string stringArrType[7];            // array to hold denomination string values
typedef int intArrType[7];                  // array to hold denomination count int values

double getRandomNum();                      // generates random number
double getPayment(double);                  // gets user input for payment
double calcChange(double, double );         // calculates change
void calcDetails(double, intArrType&);      // calculates change details
void printResults(double, double, double, intArrType);  // prints results
void getIsContinue(bool&);                  // prompts user to continue or exit

const stringArrType denomArray = {
        "Ten Dollar Bill(s)",
        "Five Dollar Bill(s)",
        "One Dollar Bill(s)",
        "Quarter(s)",
        "Dime(s)",
        "Nickel(s)",
        "Penny(ies)"
};

int main() {
    double randomNum;       // holds random number value
    double payment;         // holds payment amount
    bool isContinue = true; // holds boolean to continue or not

    cout << fixed << showpoint << setprecision(2); // set decimal point

    cout << "*************" << endl;
    cout << "*  Welcome  *" << endl;
    cout << "*************" << endl;

    while (isContinue) {
        double change = 0;              // holds change amount initialize to zero
        intArrType countArray = {0};    // holds denomination counts int values initialize to zero
        randomNum = getRandomNum();
        cout << "\nAmount to be paid: $" << randomNum << endl << endl;

        payment = getPayment(randomNum);
        change = calcChange(payment, randomNum);
        calcDetails(change, countArray);
        printResults(randomNum, payment, change, countArray);
        getIsContinue(isContinue);
    }

    cout << "Thank you goodbye!" << endl;
    return 0;
}

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

        if(payment == 1 || payment == 5 ||payment == 10 ||payment == 20) {
            validInput = true;
        } else {
            cout << "Invalid entry, please try again" << endl;
            //  Recover from a failed input operation and prepare the input stream for a new input operation
            cin.clear();
            // This discards the invalid input, preventing it from being read again and causing an infinite loop.
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (validInput && payment < randomNum) {
            cout << "Payment is not enough, please try again" << endl;
            validInput = false;
        }
    }
    return payment;
}

// function calculates the change
double calcChange(double payment, double randomNum){
    double change = payment - randomNum;
    change = std::floor(change * 100.0) / 100.0;
    return change;
}

// function calculates the change details and adds counts to array
void calcDetails(double change, intArrType& countArray) {
    while (change > 0.001) {
        if (change >= 10.00) {
            change -= 10.00;
            countArray[0]++;
        } else if (change >= 5.00) {
            change -= 5.00;
            countArray[1]++;
        } else if (change >= 1.00) {
            change -= 1.00;
            countArray[2]++;
        } else if (change >= 0.25) {
            change -= .25;
            countArray[3]++;
        } else if (change >= 0.10) {
            change -= .10;
            countArray[4]++;
        } else if (change >= 0.05) {
            change -= .05;
            countArray[5]++;
        } else {
            change -= .01;
            countArray[6]++;
        }
    }
}

// function prompts user to continue or exit
void getIsContinue(bool& isContinue){
    char userChoice;
    cout << "\nWould you like to continue? y or n " << endl;
    cin >> userChoice;

    while(userChoice != 'y' && userChoice != 'n') {
        cout << "Invalid input. Please enter y or n" << endl;
        cin >> userChoice;
    }

    if(userChoice == 'y') {
        isContinue = true;
    } else {
        isContinue = false;
    }
}

// function prints results
void printResults(double randomNum, double payment, double change, intArrType countArray) {
    cout << "\nThe amount to be paid: $" << randomNum << endl;
    cout << "Payment amount entered: $" << payment << endl;
    cout << "Total change: $" << change << endl << endl;
    for(int i = 0; i < 7; i++) {
        cout << countArray[i] << " " << denomArray[i] << endl;
    }
}