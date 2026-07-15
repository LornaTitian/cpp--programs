/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Secure login credentials verification using a do-while loop
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    const string CORRECT_USERNAME = "admin";
    const string CORRECT_PASSWORD = "Password123";

    string inputUser, inputPass;

    do {
        cout << "--- Secure Login System ---" << endl;
        cout << "Enter Username: ";
        cin >> inputUser;
        cout << "Enter Password: ";
        cin >> inputPass;

        if (inputUser == CORRECT_USERNAME && inputPass == CORRECT_PASSWORD) {
            cout << "\nAccess Granted! Welcome back." << endl;
            break; 
        } else {
            cout << "\nIncorrect credentials, try again.\n" << endl;
        }
    } while (true);

    return 0;
}