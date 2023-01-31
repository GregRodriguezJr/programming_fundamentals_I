// This program will output the circumference and area
// of the circle with a given radius.

// Greg Rodriguez

#include <iostream>
#include <math.h>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
	float area;							// definition of area of circle 
	float circumference;				// definition of circumference 
	circumference = 2 * PI * RADIUS;	// computes circumference
	area = PI * pow(RADIUS, 2);			// computes area

	// Fill in the code for the cout statement that will output (with description)
	// the circumference
	cout << "The circumference of a circle with a radius of " << RADIUS << " is " << circumference << "\n";
	// Fill in the code for the cout statement that will output (with description)
	// the area of the circle
	cout << "The area of a circle with a radius of " << RADIUS << " is " << area << "\n";
	return 0;
}