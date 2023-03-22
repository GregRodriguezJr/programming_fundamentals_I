#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    cout << fixed << setprecision(2);

    float costOfItem;
    float totalCost;
    float shippingCost;

    cout << "Cost of items ordered: " ;
    cin >> costOfItem;

    while (costOfItem < 0) {
        cout << "You must enter a positive number. Please try again." << endl;
        cout << "Cost of items ordered: " ;
        cin >> costOfItem;
    }

    if (costOfItem < 30.00) {
        shippingCost = 5.95;
    }
    if (costOfItem >= 30.00 && costOfItem <= 49.99) {
        shippingCost = 7.95;
    }
    if (costOfItem >= 50.00 && costOfItem <= 74.99) {
        shippingCost = 9.95;
    }
    if (costOfItem >= 75.00) {
        shippingCost = 0.00;
    }

    totalCost = shippingCost + costOfItem;

    cout << "Shipping cost: " << shippingCost << endl;
    cout << "Total cost: " << totalCost << endl;

    return 0;
}






