// Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen.

#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    cout << setprecision(2) << fixed << showpoint;

    double preTaxBill = 88.67;

    double taxRate = .0675;
    double tipRate = .20;

    double taxAmount = preTaxBill * taxRate;
    double postTaxBill = preTaxBill + taxAmount;

    double tipAmount = postTaxBill * tipRate;
    double totalBill = postTaxBill + tipAmount;

    cout << "\nMeal cost: $" << preTaxBill << endl;
    cout << "Tax amount: $" << taxAmount << endl;
    cout << "Tip amount: $" << tipAmount << endl;
    cout << "Total Bill: $" << totalBill << endl << "\n";

    return 0;
}
