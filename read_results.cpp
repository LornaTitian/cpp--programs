/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Reads and parses records from a binary file named 'results.dat'
 */

#include <iostream>
#include <fstream>

using namespace std;

struct StudentResult {
    char name[50];
    char regNumber[20];
    double totalMarks;
};

int main() {
    ifstream inFile("results.dat", ios::binary);

    if (!inFile) {
        cerr << "Error: Could not open binary file 'results.dat'!" << endl;
        return 1;
    }

    StudentResult student;
    cout << "==================================================" << endl;
    cout << "            STUDENT EXAMINATION RESULTS           " << endl;
    cout << "==================================================" << endl;

    while (inFile.read(reinterpret_cast<char*>(&student), sizeof(StudentResult))) {
        cout << "Name: " << student.name 
             << " | Reg No: " << student.regNumber 
             << " | Marks: " << student.totalMarks << endl;
    }

    inFile.close();
    return 0;
}