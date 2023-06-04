#include <iostream>

#include <cmath>


using namespace std;

int main()
{
    
    
    //int age;   //not giving a value so to let user give the value
    
   // cout << "Enter you age: ";  // prompt user for information
    
    //cin >> age;   // store their value
   
   //cout <<  "You are " << age << " years old";  // responds back to user with result

    
    //char age;     // using character instead of integer
       // cout << "Enter you age: ";  // prompt user for information
       // cin >> age;   // store their value
       // cout <<  "You are " << age << " years old";  // responds back to user with result

      string name; 
      cout << "Enter your name: ";      // needing to get a string of text, don't use cin command
    getline (cin, name );    // allows to get complete line of text, pass a few parameters/args
      cout <<  "Hello " << name << endl;  // responds back to user with result

return 0; 
    
    }
    
    
