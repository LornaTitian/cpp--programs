/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Secure employee records using class-based encapsulation
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Employee {
private:
    string name;
    string employeeID;
    double basicSalary;

public:
    void setEmployeeDetails(string empName, string id, double salary) {
        name = empName;
        employeeID = id;
        basicSalary = (salary >= 0) ? salary : 0.0; 
    }

    double calculateSalary() {
        return basicSalary + (0.10 * basicSalary);
    }

    void displayEmployeeDetails() {
        cout << "\n========================================" << endl;
        cout << "            EMPLOYEE RECORD             " << endl;
        cout << "========================================" << endl;
        cout << "ID:          " << employeeID << endl;
        cout << "Name:        " << name << endl;
        cout << "Basic Pay:   KES " << fixed << setprecision(2) << basicSalary << endl;
        cout << "Net Salary:  KES " << calculateSalary() << endl;
        cout << "========================================" << endl;
    }
};

int main() {
    Employee emp;
    emp.setEmployeeDetails("James Kamau", "EMP-9876", 75000.0);
    emp.displayEmployeeDetails();

    return 0;
}