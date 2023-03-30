// This program will read in a group of test scores (positive integers from 1 to 100)
// from the keyboard and then calculate and output the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

// Greg Rodriguez

#include <iostream>
#include <fstream>
using namespace std;

typedef int GradeType[100];		// declares a new data type:
								// an integer array of 100 elements

float findAverage(const GradeType, int);	// finds average of all grades 
int  findHighest(const GradeType, int);		// finds highest of all grades 
int  findLowest(const GradeType, int);		// finds lowest of all grades

int main()
{
	GradeType grades;	    // the array holding the grades.
	int numberOfGrades;	    // the number of grades read.
	int index;			    // index to the array.
	float avgOfGrades;	    // contains the average of the grades.
	int highestGrade;	    // contains the highest grade.
	int lowestGrade;	    // contains the lowest grade.
    ifstream dataIn;	    // defines an input stream for a data file


    // Read in the values into the array
    index = 0;

    // Exercise 2
//	cout << "Please input a grade from 1 to 100, (or -99 to stop) - first statement" << endl;
//	cin >> grades[index];
//
//	while (grades[index] != -99 && grades[index] <= 100)
//	{
//		// Fill in the code to read the grades
//        // increment index of array
//        index++;
//        cout << "Please input a grade from 1 to 100, (or -99 to stop) - inside while loop" << endl;
//        cin >> grades[index];
//	}
//
//	numberOfGrades = index;	// Fill blank with appropriate identifier

    // Exercise 3

    dataIn.open("gradfile.txt");
    // Check for error
    if(dataIn.fail()) {
        cout << "Error opening file" << endl;
        return 1;
    }
    while(!dataIn.eof()) {
        dataIn >> grades[index];
        index++;
    }

    dataIn.close();

    numberOfGrades = index;

	// call to the function to find average
	avgOfGrades = findAverage(grades, numberOfGrades);

	cout << endl << "The average of all the grades is " << avgOfGrades << endl;

	// Fill in the call to the function that calculates highest grade
    highestGrade = findHighest(grades, numberOfGrades);

	cout << endl << "The highest grade is " << highestGrade << endl;

	// Fill in the call to the function that calculates lowest grade
    lowestGrade = findLowest(grades, numberOfGrades);
	// Fill in code to write the lowest to the screen
    cout << endl << "The lowest grade is " << lowestGrade << endl;

    return 0;
}

//********************************************************************************
// findAverage
//
// task:	      This function receives an array of integers and its size.
//	              It finds and returns the average of the numbers in the array
// data in:	      array of floating point numbers
// data returned: average of the numbers in the array
//
//********************************************************************************

float findAverage(const GradeType array, int size)
{
	float sum = 0;			// holds the sum of all the numbers

    for (int index = 0; index <= size - 1; index++) {
		sum = sum + array[index];
    }

	return (sum / size);	// returns the average
}

//****************************************************************************
// findHighest
//
// task:	      This function receives an array of integers and its size.
//	              It finds and returns the highest value of the numbers in 
//                the array
// data in:	      array of floating point numbers
// data returned: highest value of the numbers in the array
//
//****************************************************************************

int	findHighest(const GradeType array, int size)
{
	// Fill in the code for this function
    int temp = 0;

    for (int i = 0; i <= size - 1; ++i) {
        if (array[i] > temp) {
            temp = array[i];
        }
    }

    return temp;
}

//****************************************************************************
// findLowest
//
// task:	      This function receives an array of integers and its size.
//	              It finds and returns the lowest value of the numbers in 
//                the array
// data in:	      array of floating point numbers
// data returned: lowest value of the numbers in the array
//
//****************************************************************************

int	findLowest(const GradeType array, int size)
{
	// Fill in the code for this function
    int temp = 100;

    for (int i = 0; i <= size - 1; ++i) {
        if (array[i] < temp) {
            temp = array[i];
        }
    }

    return temp;
}