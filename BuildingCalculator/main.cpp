#include <iostream>
#include <cmath>


using namespace std;

// Buiding a calculator: adding two numbers and will produce result

int main() {
   
    // create 2 variables where can store the 2 numbers inputted
   // int num1, num2;          //don't give value b/c user will give value
    double num1, num2;          //can use doubles as well
    
    cout << "Enter first number: ";   //promt user for info
    cin >> num1;
    
    cout << "Enter second number: ";   //promt user for info
    cin >> num2;
    
    
    cout << num1 + num2 << endl;
    return 0;
    
    // shortcut to run program  fn f5
}

