#include <iostream>

using namespace std;


//Functions: little collection of code that performs a specific task
//unction = container you can store code to reuse

//creating another function besides main function

 //void sayHi(string name) {  // create a return type, void= not going to return anything, putting in one parameter
 
 void sayHi(string name, int age) {// can  take multiple parameters
     cout << "Hello " << name <<  " you are " << age << endl;         // very simple function
}


 int main() {
    
     //sayHi("Nelson");                   // calling the sayHi function, passing the parameter
      sayHi("Nelson", 42);              // calling 2 functions                          
      sayHi("Tom", 60);              // can reuse the function and put different parameters                         
      sayHi("Chevy", 45);                                       

    
    
    return 0;
}

