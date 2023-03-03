// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Greg Rodriguez

#include <iostream>
using namespace std;

int main()
{
	int value;		// value is some positive number n
    int m;          // value is positive number m
	int total = 0;	// total holds the sum of the first n positive numbers 
	int number;		// the amount of numbers
	float mean;		// the average of the first n positive numbers
    int count = 0;  // track number of iterations

	cout << "\nPlease enter a positive integer to start at" << endl;
	cin >> value;
    cout << "Please enter a positive integer to end at" << endl;
	cin >> m;

	if (value > 0)
	{
		for (number = value; number <= m; number++)
		{
            count++;
			total = total + number;
		}	// curly braces are optional since there is only one statement

		mean = static_cast<float>(total) / count;	// note the use of the typecast
													// operator here 
		cout << "The mean average of the first " << count
			 << " positive integers is " << mean << endl;
	}

	else
		cout << "Invalid input - integer must be positive" << endl;

	return 0;
}