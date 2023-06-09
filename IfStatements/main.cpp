#include <iostream>

using namespace std;


//If statements:  when certain conditions are true do one thing, when another condition is true then do another thing

int main() {
    
    //bool isMale = true;                     // create a variable                 
    bool isMale = false;                // code inside {} won't be executed
    //bool isTall = false;
    bool isTall = true;
    
   // if(isMale){                          // inside () can check a condition
     if(isMale && isTall){                 //&& (and) operator 
      //if(isMale || isTall){                                   //|| (or) operator
        // cout << "You are a male" << endl;
        cout << "You are a tall male" << endl;
    } else if(isMale && !isTall){               // ! negates the statement
        cout << "You are a short male" << endl;
    }   else if(!isMale && isTall){               // ! negates the statement
        cout << "You are tall but not male" << endl;
    } else {
       // cout << "You are not male" << endl;
       cout << "You are not male and not tall" << endl;
    }                     
    
    return 0;
}

