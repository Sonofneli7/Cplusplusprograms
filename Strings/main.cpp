#include <iostream>

using namespace std;

int main()
{

    string phrase = "Nelson Program"; //String variable

    string phrasesub;
    phrasesub = phrase.substr(5, 4);                            // storing substring in another variable

    cout << phrase.length() << endl;    //string functions will tell something about string or modify the string
                                //length() tells the length of the characters in the = 14 characters

    cout << phrase[0] << endl;              //Accessing indiv. characters within the phrase ex: 1st character

    cout << phrase[2] << endl;     //Accessing the l in the phrase

    phrase [0] ='T';           // modifying individual/specific character within string

    cout << phrase << endl;

    cout << phrase.find("Program", 0) << endl;                            // find out specific info about the string, give parameters(tasks)/passing arguments
                                                                  // give string to look for and at what starting point, starts at 7th character

    cout << phrase.substr(5, 4) << endl;                           //substring function:pass it 2 parameters,starting index, then tell length, how much you want to grab

    cout << phrasesub;                              // printing out just the variable phrasesub
    return 0;
}
