#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << 5 + 7 << endl;  // can do mathematical operations output: 12

    cout << 5 - 7 << endl;  // can do mathematical operations output: -2


    cout << 5 / 7 << endl;  // can do mathematical operations output: 0 due to it having a remainder

    cout << 5 * 7 << endl;  // can do mathematical operations output: 35

    cout << 10 % 3 << endl;  // can do modulus operation: gives remainder output: 1


    cout << 4 + 5 * 10 << endl;  // order of operations output: 54
    cout << (4 + 5) * 10 << endl;  // order of operations output: 90

    int wnum = 5;
    double dnum = 5.5;

    wnum ++;                // increments 1 onto variable: wnum

    wnum --;                // decrement value by 1: wnum
    cout << wnum << endl;           //print out result of wnum

    cout << pow(2, 5) <<endl;          //power function

    cout << sqrt(36) << endl;         //square root function  **  can put decimal numbers in the functions

    cout << round(4.3) << endl;     // return rounded number of the decimal


    cout << ceil(4.2) << endl;     //rounds up to nearest number

    cout << floor(5.9) << endl;     // rounds down to nearest whole number

    cout << fmax(3, 10) << endl;     // takes two numbers and returns highest number

    cout << fmin(3,10) << endl;        // two numbers, result is lowest number

    return 0;
}
