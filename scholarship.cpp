#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Declare variables
    string studentName;
    double examMarks;
    double attendancePercentage;
    string scholarshipStatus = "No Scholarship"; // Default status

    // Prompt user for input
    cout << "Enter student name: ";
    getline(cin, studentName); // Using getline to accommodate spaces in names

    cout << "Enter exam marks (0-100): ";
    cin >> examMarks;

    cout << "Enter attendance percentage (0-100): ";
    cin >> attendancePercentage;

    // 2. Nested if statements to determine scholarship eligibility
    if (examMarks >= 70) {
        if (attendancePercentage >= 80) {
            scholarshipStatus = "Full Scholarship";
        } else {
            scholarshipStatus = "Partial Scholarship";
        }
    } 
    else if (examMarks >= 50 && examMarks <= 69) {
        if (attendancePercentage >= 85) {
            scholarshipStatus = "Partial Scholarship";
        } else {
            scholarshipStatus = "No Scholarship";
        }
    } 
    else {
        // Marks are below 50
        scholarshipStatus = "No Scholarship";
    }

    // 3. Display the results
    cout << "\n--- Scholarship Details ---\n";
    cout << "Student Name: " << studentName << endl;
    cout << "Scholarship Status: " << scholarshipStatus << endl;

    return 0;
}