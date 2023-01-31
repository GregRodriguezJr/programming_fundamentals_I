// This program that will determine the area and perimeter of a rectangle

// Greg Rodriguez

#include <iostream>
using namespace std;

int LENGTH;
int WIDTH;

int main() {

    // prompt user for length
    cout << "Enter a length: ";
    // get input from user
    cin >> LENGTH;

    // promp user for width
    cout << "Enter a width: ";
    // get input from user
    cin >> WIDTH;

    // computes area
    int area = WIDTH * LENGTH; 
    // computes perimeter
    int perimeter = 2 * (LENGTH + WIDTH);

    // cout statment that will output area
    cout << "The area of the rectangle is " << area << "\n";
    // cout statment that will output perimeter
    cout << "The perimeter of the rectangle is " << perimeter << "\n";

    return 0;
}