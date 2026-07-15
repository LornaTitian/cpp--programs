/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Grading system using an if-else ladder
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string studentName;
    int examMarks;
    char grade;

    cout << "--- School Grading System ---" << endl;
    cout << "Enter Student Name: ";
    getline(cin, studentName);
    
    cout << "Enter Exam Marks (0-100): ";
    cin >> examMarks;

    if (examMarks >= 70 && examMarks <= 100) {
        grade = 'A';
    } else if (examMarks >= 60 && examMarks <= 69) {
        grade = 'B';
    } else if (examMarks >= 50 && examMarks <= 59) {
        grade = 'C';
    } else if (examMarks >= 40 && examMarks <= 49) {
        grade = 'D';
    } else if (examMarks >= 0 && examMarks < 40) {
        grade = 'E';
    } else {
        cout << "Error: Invalid marks entered!" << endl;
        return 1; 
    }

    cout << "\n===============================" << endl;
    cout << "Student: " << studentName << endl;
    cout << "Marks:   " << examMarks << endl;
    cout << "Grade:   " << grade << endl;
    cout << "===============================" << endl;

    return 0;
}