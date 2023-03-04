// This program finds the average time spent programming by a student
// each day over a three day period.

// Greg Rodriguez

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, numHours2, total, average;
	int student, day = 0;	// these are the counters for the loops
    int numOfDays;
    string result;          // string to hold the result of studying

	cout << "This program will find the average number of hours a day"
		 << " that a student spent studying over a long weekend\n\n";
	cout << "How many students are there ?" << endl;
	cin >> numStudents;

    // Ask user for how many days to enter
    cout << "How many days would you like to consider?" << endl;
    cin >> numOfDays;

    // While loop to ensure data is a positive number
    while (numOfDays <= 0) {
        cout << "Error - please enter a positive number for amount of days" << endl;
        cout << "How many days would you like to consider?" << endl;
        cin >> numOfDays;
    }

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;

        // Biology
		for (day = 1; day <= numOfDays; day++)
		{
			cout << "\nPlease enter the number of hours worked by student "
				 << student << " on day " << day << " in biology." << endl;
			cin >> numHours;

            cout << "\nPlease enter the number of hours worked by student "
				 << student << " on day " << day << " in programming." << endl;
			cin >> numHours2;

			total = total + numHours + numHours2;
		}

		average = total / static_cast<float>(numOfDays);

        // Conditional to print results of most time spent on subject
        if (numHours == numHours2) {
            result = "neither, same amount of time.";
        } else if ( numHours < numHours2) {
            result = "programming.";
        } else {
            result = "biology.";
        }

		cout << endl;
		cout << "The average number of hours per day spent studying by "
			 << "student " << student << " is " << average << endl
             << "The most study time was spent on " << result << endl;
	}

	return 0;
}