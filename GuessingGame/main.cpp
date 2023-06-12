#include <iostream>

using namespace std;

int main() {
   
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    
    while(secretNum != guess && !outOfGuesses){                          // While loop:Check to see if not equal to guesses and not out of guesses
        if(guessCount < guessLimit){                                     // if and else statements
            
        cout << "Enter guess: " << endl;
        cin >> guess;
        guessCount++;
            
        } else {
            outOfGuesses = true;
        }
       
    }
        if(outOfGuesses){                               // if true, out of guesses then will print this out
            cout << " You Lose! " << endl;
        } else {
            cout << " You Win! " << endl;               // if still have guesses

        }
       
                    //cout << " You win! " << endl;

    
    return 0;
}

