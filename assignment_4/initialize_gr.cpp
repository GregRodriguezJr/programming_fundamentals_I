// This program tests whether or not an initialized value
// is equal to a value input by the user

// Greg Rodriguez

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;	// num1 and num2 have not been initialized

	cout << "\nPlease enter an integer" << endl;
	cin >> num1;

    // exercise 2
    cout << "\nPlease enter another integer" << endl;
	cin >> num2;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

    // exercise 1
	if (num1 == num2) {
        //exercise 3
        cout << "The values are the same." << endl;
        cout << "Hey, that's a coincidence!" << endl;
      // exercise 4
    } else {
        cout << "The values are not the same" << endl;
    }

	return 0;
}