// Assuming there are no deposits other than the original investment.
// The balance in a savings account after one year may be calculated as

#include <iostream>
#include <cmath>	
#include <iomanip>
using namespace std;

int main()
{
    double principal;
    double rate;
    double interestRate;
    double times;
    double amount;
    double temp;
    double interestAmount;

    cout << "\nEnter principal amount: " << endl;
    cin >> principal;
    cout << "Enter interest rate: " << endl;
    cin >> rate;
    interestRate = rate / 100;
    cout << "Enter number of times compounded: " << endl;
    cin >> times;
    // formula amount = principal * (1 + rate / t) ^ t;
    temp = 1 + (interestRate / times);
    amount = principal * pow(temp,times);
    interestAmount = amount - principal;

    cout << "\nInterest rate: " << setw(15) << rate << "%" << endl;
    cout << "Times compounded: " << setw(12) << times << endl;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Principal: " << setw(12) << "$" << principal << endl;
    cout << "Interest: " << setw(15) << "$" << interestAmount << endl;
    cout << "Amount in savings: " << setw(4) << "$" << amount << endl << endl;
    return 0;
}
