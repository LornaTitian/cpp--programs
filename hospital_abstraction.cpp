/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Hospital payroll management using abstract base classes and interfaces
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class MedicalStaff {
protected:
    string name;
    string staffID;

public:
    MedicalStaff(string n, string id) : name(n), staffID(id) {}

    virtual double calculateSalary() = 0;

    void displayDetails() {
        cout << "Staff ID: " << staffID << " | Name: " << name;
    }

    virtual ~MedicalStaff() {} 
};

class Doctor : public MedicalStaff {
private:
    double basicSalary;
    double allowance;

public:
    Doctor(string n, string id, double basic, double allow) 
        : MedicalStaff(n, id), basicSalary(basic), allowance(allow) {}

    double calculateSalary() override {
        return basicSalary + allowance;
    }
};

class Nurse : public MedicalStaff {
private:
    double basicSalary;
    double overtimePay;

public:
    Nurse(string n, string id, double basic, double otPay) 
        : MedicalStaff(n, id), basicSalary(basic), overtimePay(otPay) {}

    double calculateSalary() override {
        return basicSalary + overtimePay;
    }
};

int main() {
    cout << "--- Hospital Staff Payroll (Abstraction) ---" << endl;

    MedicalStaff* staff1 = new Doctor("Dr. John Ndungu", "DOC-001", 150000.0, 45000.0);
    MedicalStaff* staff2 = new Nurse("Sister Mercy", "NUR-223", 80000.0, 15000.0);

    staff1->displayDetails();
    cout << " | Calculated Net Pay: KES " << fixed << setprecision(2) << staff1->calculateSalary() << endl;

    staff2->displayDetails();
    cout << " | Calculated Net Pay: KES " << staff2->calculateSalary() << endl;

    delete staff1;
    delete staff2;

    return 0;
}