//
// Created by Greg Rodriguez on 4/13/23.
//

#include <iostream>
#include <random>
using namespace std;

double getRandomNum(); // generates random number

int main() {
    double randomNum;

    cout << "*************" << endl;
    cout << "*  Welcome  *" << endl;
    cout << "*************" << endl;

    randomNum = getRandomNum();
    cout << randomNum;
    return 0;
};

double getRandomNum() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.01, 20.00);
    return dis(gen);
}