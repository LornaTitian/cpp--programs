/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Logs daily borrowed book titles to a file without overwriting records
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string bookTitle;
    
    ofstream outFile("borrowed_books.txt", ios::app);

    if (!outFile) {
        cerr << "Error: Unable to open file for writing!" << endl;
        return 1;
    }

    cout << "--- Library Book Checkout Log ---" << endl;
    cout << "Enter the title of the borrowed book: ";
    getline(cin, bookTitle);

    outFile << bookTitle << endl;

    cout << "Confirmation: \"" << bookTitle << "\" successfully stored in borrowed_books.txt." << endl;

    outFile.close();
    return 0;
}