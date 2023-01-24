// Convert kilometers to miles

// Greg Rodriguez

#include <iostream>
using namespace std;

int main() {

    float kilos;
    float miles;

    // Prompt user to enter kilometers to convert
    cout << "Enter kilometers \n";
    cout << "Then hit enter/return \n";
    cin >> kilos;

    // km to miles formula
    miles = kilos / 1.609344;

    // Echo the result
    cout << kilos << " kilometers is " << miles << " miles \n";

    return 0;
}
