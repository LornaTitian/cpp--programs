/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Admission decision system using nested if statements
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string studentName;
    int age;
    double examScore;
    string decision;

    cout << "--- Ruiru College Admission System ---" << endl;
    cout << "Enter Student Name: ";
    getline(cin, studentName);
    
    cout << "Enter Age: ";
    cin >> age;
    
    cout << "Enter Exam Score: ";
    cin >> examScore;

    if (age >= 18) {
        if (examScore >= 50.0) {
            decision = "Admitted";
        } else {
            decision = "Not Admitted: Low Score";
        }
    } else {
        decision = "Not Admitted: Underage";
    }

    cout << "\n=====================================" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Decision:     " << decision << endl;
    cout << "=====================================" << endl;

    return 0;
}