#include <iostream>

using namespace std;

int main() {
    
   // int index = 1;
   // while(index <= 5){                      // Indexing variable: keeps tracks of how many times go through the loop
        //cout << index << endl;              // (index <= 5) aka looping condition or looping guard
        //index++;
    //}
                                            
    //for(int i = 1; i <= 5; i++){                    // i aka index
         //cout << i << endl;                           // for loop equivalent to while loop with less code
    
    int nums[ ] = {1, 2, 5, 7, 3} ;                                   // keeping track of iterations through an array
    for(int i = 0; i < 5; i++){                    // i aka index
         cout << nums[i] << endl;
    
    
    }
    
    return 0;
}

