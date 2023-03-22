#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int num;

    cout << "Please input a positive number: " ;
    cin >> num;

    while ( num < 0) {
        cout << "Your input is invalid." << endl;

        cout << "Please input a positive number: " ;
        cin >> num;
    }

    for (int i = 1; i <= num; ++i) {
        // capture all numbers that can be divided by 3
        if (i % 3 == 0) {
            cout << setw(2) << i << setw(8) << i * i << setw(8) << i * i * i <<endl;
        }
    }

    return 0;
}







