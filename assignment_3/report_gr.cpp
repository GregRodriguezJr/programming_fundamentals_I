// This program will asks for the month, the year, and the total amount collected at the cash register.

// Greg Rodriguez

#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
    string month;
    int year;
    float totalCollected;
    float totalSales;
    float countyTax;
    float stateTax;

    // Format
    cout << setprecision(2) << fixed;

    // Get month from the user
    cout << "\nPlease enter the month" << endl;
    cin >> month;

    // Get total amount collected at register
    cout << "Please enter the total amount collected" << endl;
    cin >> totalCollected;

    // Calculate product sales
    totalSales = totalCollected / 1.06;

    // Calculate county sales tax
    countyTax = totalSales * .02;

    // Calculate state sales tax
    stateTax = totalSales * .04;
    
    // Display results
    cout << "\nMonth: " << month << endl;
    cout << "\n-----------------------\n";
    cout << "\nTotal Collected:"  << setw(10) << "$" << setw(9) << totalCollected << endl;
    cout << "Sales:" << setw(20) << "$" << setw(9) << totalSales << endl;
    cout << "County Sales Tax:" << setw(9) << "$" << setw(9) << countyTax << endl;
    cout << "State Sales Tax:" << setw(10) << "$" << setw(9) << stateTax << endl;
    cout << "Total Sales Tax:" << setw(10) << "$" << setw(9) << countyTax + stateTax << "\n\n";

    return 0;
}
