
// Greg Rodriguez.

#include <iostream>
#include <cmath>
using namespace std;


int main() {

    int seconds;
    float height, distance;

    cout << "\nPlease input the time of fall in seconds:" << endl;
    cin >> seconds;

    cout << "Please input the height of the bridge in meters:" << endl;
    cin >> height;

    cout << "Time Falling (seconds) Distance Fallen (meters)" << endl
         << "***********************************************" << endl;

    for (int i = 0; i <= seconds; ++i) {

        distance = 0.5 * 9.8 * pow(i,2);

        cout << i << "\t\t" << distance << endl;
    }

    if (distance > height) {
        cout << "\nWarning-Bad Data:" << endl
             << "The distance fallen exceeds the height of the bridge\n";
    }

    return 0;
}