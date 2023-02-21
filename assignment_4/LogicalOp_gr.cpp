// This program illustrates the use of logical operators

// Greg Rodriguez

#include <iostream>
using namespace std;

int main()
{
	char year;
	float gpa;

	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
	<< endl << endl;
	cin >> year;

	cout << "Now enter your GPA" << endl;
	cin >> gpa;

    // exercise 1
//	if (!(gpa < 2.0) && year == '4')
//		cout << "It is time to graduate soon" << endl;
//
//	else if (year != '4' || gpa <2.0)
//		cout << "You need more schooling" << endl;

    // exercise 3
	if (gpa >= 2.0 || year == '4')
		cout << "It is time to graduate soon" << endl;

	else if (year != '4' && gpa <2.0)
		cout << "You need more schooling" << endl;

	return 0;
}