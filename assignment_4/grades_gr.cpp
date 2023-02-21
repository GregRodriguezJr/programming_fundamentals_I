// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Greg Rodriguez

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "\nInput your average:" << endl;
	cin >> average;

    // exercise 3
	if (average >= 0 && average <= 59) {
		cout << "You Fail" << endl;
    } else if (average >= 60 && average <= 79) {
		cout << "You Pass" << endl;
    } else if (average >= 80 && average <= 89) {
        cout << "B" << endl;
    } else if (average >= 90 && average <= 100) {
        cout << "A" << endl;
    } else {
        cout << "Invalid data" << endl;
    }

	return 0;
}