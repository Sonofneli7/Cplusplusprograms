#include <iostream>

using namespace std;

// give parameters to functions and have information return back

  double cube(double num)  {        //declaring a datatype
    //double result = num * num * num;
   // return result;
   
   
   return num * num * num;                                     // can cut out middle man 
  }                                                             // return keyword signifies done executing code inside this function


int main() {
    
                                    // 2-cubed or 2*2*2
   //double answer =  cube(5.0);     // storing value in variable: answer                       // call the above function double num
   // cout << answer << endl;
      

    cout <<  cube(5.0) << endl;                       // cut out middle and just print out value
    
    return 0;
}

