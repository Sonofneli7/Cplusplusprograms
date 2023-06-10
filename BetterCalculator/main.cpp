#include <iostream>
#include <cmath>

using namespace std;




int main() {
    double num1, num2;                      //integers
    char op;                                // operator: +, -,
    
    cout << "Enter first number: " << endl;                                      // get input from user via prompt
    cin >> num1;
    
    cout << "Enter operator: " << endl;                                      // get input from user via prompt
    cin >> op;
    
    
    cout << "Enter second number: " << endl;                                      // get input from user via prompt
    cin >> num2;
    
    int result;
    
    
    if(op == '+' ){
      result =  num1 + num2;
    } else if(op == '-'){
      result =  num1 - num2;
    } else if(op == '*'){
      result =  num1 * num2;
    } else if(op == '/'){
      result =  num1 / num2;
    } else {
        cout << "Invalid Operation" << endl;
    }
    
    cout << result << endl;
    
    return 0;
}

