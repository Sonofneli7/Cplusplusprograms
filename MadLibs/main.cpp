#include <iostream>
#include <cmath>


using namespace std;
 // Sprinkle in random words into a story

int main() {
    
   string color, pluralNoun, celebrity;
   
   cout << "Enter a color: ";
   getline(cin, color);
   
   cout << "Enter a plural noun: ";
   getline(cin, pluralNoun);
   
   cout << "Enter a celebrity: ";
   getline(cin, celebrity);
   
    cout << "Roses are " << color << endl;            //letting user enter in color
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;


    return 0;
}

