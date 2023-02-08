// This program will input the number of chairs sold for each style. 
// It will print the total dollar sales of each style as well as the total sales 
// of all chairs in fixed point notation with two decimal places.

// Greg Rodriguez

// pseudocode
// prompt user for number of chairs for each style type
// get user input for each sold style
// store the values in variables
// compute total for each chair style
// compute the multiplication for the grand total
// print out total sales and style with correct format

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {

    int quantity1, quantity2, quantity3;
    float total;
    float americanTotal, modernTotal, frenchTotal;

    cout << setprecision(2) << fixed;

    cout << "\nPlease input the number of American Colonial chairs sold" << endl;
    cin >> quantity1;

    cout << "Please input the number of Modern chairs sold" << endl;
    cin >> quantity2;

    cout << "Please input the number of French Classical chairs sold" << endl;
    cin >> quantity3;

    americanTotal = quantity1 * 85.00;
    modernTotal = quantity2 * 57.50;
    frenchTotal = quantity3 * 127.75;
    total = americanTotal + modernTotal + frenchTotal;

    cout << "The total sales of American Colonial chairs $" << americanTotal << endl;
    cout << "The total sales of Modern chairs $" << modernTotal << endl;
    cout << "The total sales of French Classical chairs $" << frenchTotal << endl;
    cout << "The total sales of all chairs $" << total << "\n\n";

    return 0;
}
