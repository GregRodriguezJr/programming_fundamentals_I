// This program will read in prices and store them into a two-dimensional array.
// It will print those prices in a table form.

// Greg Rodriguez

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXROWS = 10;
const int MAXCOLS = 10;

typedef float PriceType[MAXROWS][MAXCOLS];	// creates a new data type
											// of a 2D array of floats

void getPrices(PriceType, int&, int&);		// gets the prices into the array 
void printPrices(PriceType, int, int);		// prints data as a table
float findHighestPrice(PriceType table, int, int); // finds highest price
float findLowestPrice(PriceType table, int, int); // finds lowest price

int main()
{
	int rowsUsed;			// holds the number of rows used
	int colsUsed;			// holds the number of columns used
	PriceType priceTable;	// a 2D array holding the prices
    float highestPrice;     // holds the highest price value
    float lowestPrice;      // holds the lowest price value

	getPrices(priceTable, rowsUsed, colsUsed);		// calls getPrices to fill the array 
	printPrices(priceTable, rowsUsed, colsUsed);	// calls printPrices to display array

    highestPrice = findHighestPrice(priceTable, rowsUsed, colsUsed); // find highest price and store in variable
    cout << "\nHighest price is: " << highestPrice << endl;

    lowestPrice = findLowestPrice(priceTable, rowsUsed, colsUsed); // find lowest price and store in variable
    cout << "\nLowest price is: " << lowestPrice << endl;

	return 0;
}

//*******************************************************************************
//	getPrices
//
//	task:	  This procedure asks the user to input the number of rows and
//	          columns. It then asks the user to input (rows * columns) number of
//	          prices. The data is placed in the array.
//	data in:  none
//	data out: an array filled with numbers and the number of rows
//	          and columns used.
//
//*******************************************************************************

void getPrices(PriceType table, int& numOfRows, int& numOfCols)
{
	cout << "Please input the number of rows from 1 to " << MAXROWS << endl;
	cin >> numOfRows;

	cout << "Please input the number of columns from 1 to " << MAXCOLS << endl;
	cin >> numOfCols;

	for (int row = 0; row < numOfRows; row++)
	{
		for (int col = 0; col < numOfCols; col++)
		{
			// Fill in the code to read and store the next value in the array
            cout << "Please input price of an item with 2 decimal places for row "
            << row + 1 << " column " << col + 1 << endl;
            cin >> table[row][col];
		}
	}
}

//***************************************************************************
//	printPrices
//
//	task:	  This procedure prints the table of prices
//	data in:  an array of floating point numbers and the number of rows
//	          and columns used.
//	data out: none
//
//****************************************************************************

void printPrices(PriceType table, int numOfRows, int numOfCols)
{
	cout << fixed << showpoint << setprecision(2);

	for (int row = 0; row < numOfRows; row++)
	{
		for (int col = 0; col < numOfCols; col++)
		{
			// Fill in the code to print the table
            cout << setw(8) << table[row][col];
		}
        cout << endl;
	}
}

// This function returns the highest price in the array
float findHighestPrice(PriceType table, int numOfRows, int numOfCols) {
    float highestPrice;
    highestPrice = table[0][0]; // make first element the highest price
    for (int row = 0; row < numOfRows; row++) {
        for (int col = 0; col < numOfCols; col++) {
            if ( highestPrice < table[row][col] ) highestPrice = table[row][col];
        }
    }
    return highestPrice;
}

// This function returns the lowest price in the array
float findLowestPrice(PriceType table, int numOfRows, int numOfCols) {
    float lowestPrice;
    lowestPrice = table[0][0]; // make first element the lowest price
    for (int row = 0; row < numOfRows; row++) {
        for (int col = 0; col < numOfCols; col++) {
            if ( lowestPrice > table[row][col] ) lowestPrice = table[row][col];
        }
    }
    return lowestPrice;
}