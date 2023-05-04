//
// Created by Greg Rodriguez on 5/3/23.
//

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

    cout<< "Number" << setw(8) << "Square" << setw(6) << "Cube" <<endl;
    for (int i = 1; i <= num; ++i) {
        if (i % 2 != 0) {
            cout << setw(6) << i << setw(8) << i * i << setw(6) << i * i * i <<endl;
        }
    }

    return 0;
}