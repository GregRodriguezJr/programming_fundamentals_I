// Program that will input temperatures for consecutive days.
// The program will store these values into an array
// and call a function that will return the average of the temperatures.
// It will also call a function that will return the highest temperature
// and a function that will return the lowest temperature.
// The user will input the number of temperatures to be read.
// There will be no more than 50 temperatures.
// Use typedef to declare the array type.
// The average should be displayed to two decimal places.

// Created by Greg Rodriguez on 3/31/23.

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXTEMP = 50;
typedef int TempArrType[MAXTEMP];

void setTemp(TempArrType, int&);
float getAverageTemp(const TempArrType, int);

int main () {

    int arrayLength = 0;
    TempArrType tempArr;
    float tempAverage;

    setTemp(tempArr, arrayLength);

    tempAverage = getAverageTemp(tempArr, arrayLength);
    cout << fixed << showpoint << setprecision(2);
    cout << "The average temperature is " << tempAverage << " degrees " << endl;

    return 0;
}

// function gets input from user and stores temps in an array
void setTemp(TempArrType tempArr, int& arrLength) {

    cout << "Enter the amount of days to record: ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        cout << "Enter temperature for day " << i + 1 << " : ";
        cin >> tempArr[i];
    }
}

// function gets the average of all temps
float getAverageTemp(const TempArrType tempArr, int arrLength) {
    float sum = 0;
    for (int i = 0; i < arrLength ; i++) {
        sum += tempArr[i];
    }
    return sum / arrLength;
}