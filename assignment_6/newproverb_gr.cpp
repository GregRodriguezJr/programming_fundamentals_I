// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their ___"
// Inputting a 1 will use the word party. Any other number will use the word country.

// Greg Rodriguez

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
//void writeProverb(int);
void writeProverb(string);

int main()
{
//	int wordCode;
    string userWord;

	cout << "\nGiven the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___"
		 << endl;
//	cout << "Input a 1 if you want the sentence to be finished with party"
//		 << endl;
//	cout << "Input any other number for the word country" << endl;
//
//	cout << "Please input your choice now" << endl;
//	cin >> wordCode;
    cout << "Please input the word you would like to have finish the proverb " << endl;
	cout << endl;
    cin >> userWord;

    writeProverb(userWord);
//	writeProverb(wordCode);

	return 0;
}

//	******************************************************************************
//	writeProverb
//
//	task:	  This function prints a proverb. The function takes a number
//	          from the call. If that number is a 1 it prints "Now is the time
//	          for all good men to come to the aid of their party."
//	          Otherwise, it prints "Now is the time for all good men
//	          to come to the aid of their country."
//	data in:  code for ending word of proverb (integer)
//	data out: no actual parameter altered
//
//	*****************************************************************************
// Exercise 2
//void writeProverb(int number)
//{
//    string lastWord;
//    while (number < 1 || number > 2) {
//        cout << "I'm sorry but that is an incorrect choice; Please input a 1 or 2" << endl;
//        cin >> number;
//    };
//
//    if (number == 1) {
//        lastWord = "party.";
//    } else if (number == 2) {
//        lastWord = "country.";
//    }
//    cout << "Now is the time for all good men to come to the aid of their "
//         << lastWord << endl;
//}
// Exercise 3
void writeProverb(string word) {
    cout << "Now is the time for all good men to come to the aid of their "
         << word << endl;
}