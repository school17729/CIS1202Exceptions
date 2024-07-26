#include "Generic.h"

template<> void getValue<string>(istream & inputStream, string & value) {
    getline(inputStream, value);
}

int getChoice(int choices) {
    // Repeatedly asks for user's choice until user doesn't input an invalid choice
    int choice;
    bool invalidChoice = true;
    while (invalidChoice) {
        cout << "Enter your choice: " << endl;
        getValue(cin, choice);

        if (choice >= 1 && choice <= choices) {
            invalidChoice = false;
        } else {
            cout << "Invalid choice" << endl;
        }
    }
    return choice;
}
