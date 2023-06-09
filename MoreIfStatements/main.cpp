#include <iostream>

using namespace std;


//will take 2 numbers/parameters and return the larger of the two

// in a lot of cases won't have boolean values accessible, can use a comparison
//int getMax(int num1, int num2){              // using comparisons inside if statements
    
    int getMax(int num1, int num2, int num3){ 
    
    int result; 
    
   // if (num1 > num2){                   // (=) assigning a variable, (= =) is an comparison operator
        result = num1;
   // } else {
        result = num2;
   // }
   // can compare doubles and floats as well as characters
   // if stmt for 3 integers
   if(num1 >= num2 && num1 >= num3){
       result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
        
    return result;
}

int main() 
{
   cout << getMax(2,5, 10) << endl;         // testing the above function
    
    return 0;
}

