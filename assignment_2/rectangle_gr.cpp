// This program that will determine the area and perimeter of a rectangle

// Greg Rodriguez

#include <iostream>
using namespace std;

const int LENGTH = 8;
const int WIDTH = 3;

int main() {

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