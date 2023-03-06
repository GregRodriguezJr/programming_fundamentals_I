
// Created by Greg Rodriguez

#include <iostream>
using namespace std;

int main() {
    int sum = 0, count = 1;

    for (int i = count; i < 20; ++i) {
        if(i % 2 == 0) {
            sum += i;
            cout << "count: " << i << " " << "sum: " << sum << endl;
        }
    }

    cout << "Sum is : " << sum << endl;
}
