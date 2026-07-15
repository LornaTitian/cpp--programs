/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Employee payroll system using functions
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours);
double calculateOvertimePay(double overtimeHours, double ratePerHour = 500.0);
double calculateNetSalary(double basicSalary, double overtimePay);
void displayPayslip(string name, double basicSalary, double overtimeHours, double overtimePay, double netSalary);

int main() {
    string name;
    double basicSalary = 0.0;
    double overtimeHours = 0.0;

    getEmployeeDetails(name, basicSalary, overtimeHours);
    double overtimePay = calculateOvertimePay(overtimeHours);
    double netSalary = calculateNetSalary(basicSalary, overtimePay);
    displayPayslip(name, basicSalary, overtimeHours, overtimePay, netSalary);

    return 0;
}

void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "--- Enter Employee Details ---" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Basic Salary: ";
    cin >> basicSalary;
    cout << "Overtime Hours: ";
    cin >> overtimeHours;
}

double calculateOvertimePay(double overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}

double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

void displayPayslip(string name, double basicSalary, double overtimeHours, double overtimePay, double netSalary) {
    cout << "\n========================================" << endl;
    cout << "               PAYSLIP                  " << endl;
    cout << "========================================" << endl;
    cout << left << setw(22) << "Employee Name:" << name << endl;
    cout << left << setw(22) << "Basic Salary:" << "KES " << fixed << setprecision(2) << basicSalary << endl;
    cout << left << setw(22) << "Overtime Hours:" << overtimeHours << " hrs" << endl;
    cout << left << setw(22) << "Overtime Pay:" << "KES " << overtimePay << endl;
    cout << "----------------------------------------" << endl;
    cout << left << setw(22) << "Net Salary:" << "KES " << netSalary << endl;
    cout << "========================================" << endl;
}