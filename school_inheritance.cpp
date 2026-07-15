/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: School Management System implementing Single Inheritance
 */

#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore(); 
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age:  " << age << endl;
    }
};

class Student : public Person {
private:
    string admissionNumber;
    string className;

public:
    void inputStudentDetails() {
        inputPerson(); 
        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);
        cout << "Enter Class: ";
        getline(cin, className);
    }

    void displayStudent() {
        cout << "\n--- Student Profiles ---" << endl;
        displayPerson(); 
        cout << "Admission ID: " << admissionNumber << endl;
        cout << "Class Name: " << className << endl;
    }
};

int main() {
    Student studentObj;
    cout << "--- Inputting Student Profile ---" << endl;
    studentObj.inputStudentDetails();
    studentObj.displayStudent();

    return 0;
}