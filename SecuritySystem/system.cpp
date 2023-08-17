
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {

    int a, i = 0;
    string text, old, password1, password2, pass, name, password0, age, user, word, word1;
    string creds[2], cp[2];

    cout << "       Security System" << endl;
    cout << " ________________________________" << endl << endl;
    cout << "|          1. Register           |" << endl;
    cout << "|          2. Login              |" << endl;
    cout << "|          3. Change password    |" << endl;
    cout << "|__________4. End Program________|" << endl << endl;

    do {
        cout << endl << endl;
        cout << "Enter your choice:-";
        cin >> a;

        switch (a) {
            case 1: {
                cout << "_______________________" << endl << endl;
                cout << "|------Register-------|" << endl;
                cout << "|_____________________|" << endl << endl;
                cout << "Please enter your username:- "<<endl;
                cin >> name;
                cout << "Please enter your password:- "<<endl;
                cin >> password0;
                cout << "Please enter your age:- ";
                cin >> age;

                ofstream of1;
                of1.open("file.txt");
                if (of1.is_open()) {
                    of1 << name << "\n";
                    of1 << password0 << "\n"; // Added newline character
                    of1 << age << "\n"; // Added newline character
                    cout << "Registration Successful" << endl;
                }
                of1.close(); // Added closing the file
                break;
            }

            case 2: {
                i = 0;
                cout << "_______________________" << endl << endl;
                cout << "|--------Login--------|" << endl;
                cout << "|_____________________|" << endl << endl;

                ifstream of2("file.txt"); // Open the file directly
                cout << "Please enter the username:- ";
                cin >> user;
                cout << "Please enter the password:- ";
                cin >> pass;

                if (of2.is_open()) {
                    while (getline(of2, text)) {
                        istringstream iss(text);
                        iss >> word;
                        creds[i] = word;
                        i++;
                    }
                    of2.close(); // Close the file

                    if (user == creds[0] && pass == creds[1]) {
                        cout << "---Log in successful--- ";
                        cout << endl << endl;
                        cout << "Details: " << endl;
                        cout << "Username: " + creds[0] << endl;
                        cout << "Password: " + creds[1] << endl;
                        cout << "Age: " + creds[2] << endl;
                    } else {
                        cout << endl << endl;
                        cout << "Incorrect Credentials" << endl;
                        cout << "|    1. Press 2 to Login               |" << endl;
                        cout << "|    2. Press 3 to change password     |" << endl;
                        break;
                    }
                }
                break;
            }

            // Rest of your cases and code...

            case 4: {
                cout << "_______________Thank you!_________________" << endl;
                break;
            }

            default:
                cout << "Enter a valid choice";
        }
    } while (a != 4);
    return 0;
}
