#include <iostream>  // need input/output library to run code. now understands cout and cin
using namespace std;

int main() //all programs must have one main function
{
   int favorite_number;  //variable declaration
   std::cout << "Enter your favorite number between 1 and 100:";  // asking for input
   std::cin >> favorite_number;  // storing user input into favorite_number variable
   std::cout << "Amazing!! That's my favorite number too." << std::endl;
   return 0;
}


//now compile, link, and execute program aka build & run
//right click on main.cpp then compile
//Rebuild is the combo of a clean and build