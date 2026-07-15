BCS-03-0116/2025
Gathirua Lorna Titian



#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    
    string studentName;
    double theoryMarks;
    double practicalMarks;

    
    cout << "--- Rocky Driving School Evaluation ---" << endl;
    cout << "Enter Student Name: ";
    getline(cin, studentName);
    
    cout << "Enter Theory Test Marks (0-100): ";
    cin >> theoryMarks;
    
    cout << "Enter Practical Test Marks (0-100): ";
    cin >> practicalMarks;


    double averageScore = (theoryMarks + practicalMarks) / 2.0;

    
    cout << "\n========================================" << endl;
    cout << "         DRIVING TEST REPORT            " << endl;
    cout << "========================================" << endl;
    cout << left << setw(22) << "Student Name:" << studentName << endl;
    cout << left << setw(22) << "Theory Marks:" << theoryMarks << endl;
    cout << left << setw(22) << "Practical Marks:" << practicalMarks << endl;
    cout << left << setw(22) << "Average Score:" << fixed << setprecision(2) << averageScore << endl;
    cout << "----------------------------------------" << endl;
    
    if (averageScore >= 50.0) {
        cout << left << setw(22) << "Final Status:" << "PASSED" << endl;
    } else {
        cout << left << setw(22) << "Final Status:" << "FAILED" << endl;
    }
    cout << "========================================" << endl;

    return 0;
}