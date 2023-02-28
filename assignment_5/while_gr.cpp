// Greg Rodriguez

#include <iostream>
using namespace std;

int main()
{   // step 2
//	char letter = 'a';
//
//    cout << "\nEnter x to exit" << endl;
//
//	while (letter != 'x')
//	{
//		cout << "Please enter a letter to continue" << endl;
//		cin >> letter;
//
//		cout << "The letter you entered is " << letter << endl;
//	}

    // step 3
    char letter;

    cout << "\nEnter x to exit" << endl;

    do {
        cout << "Please enter a letter to continue" << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;
    } while (letter != 'x');

	return 0;
}