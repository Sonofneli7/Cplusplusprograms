#include <iostream>

using namespace std;

//converting a number into a day of the week.


string getDayOfWeek(int dayNum){          // taking one parameter
     string dayName;                      // Create variable
      
    switch(dayNum){
    case 0:                   //creating a switch statement
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesdaay";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
         dayName = "Invalid Day Name";
}
    



    return dayName;
}


int main() {
    
    cout << getDayOfWeek(1) << endl;
     cout << getDayOfWeek(6) << endl;
      cout << getDayOfWeek(10) << endl;
    return 0;
}

