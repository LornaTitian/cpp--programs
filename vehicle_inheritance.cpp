/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Vehicle management system implementing Single Inheritance
 */

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string brand;
    int yearOfManufacture;

public:
    void inputVehicle() {
        cout << "Enter Vehicle Brand: ";
        getline(cin, brand);
        cout << "Enter Year of Manufacture: ";
        cin >> yearOfManufacture;
    }

    void displayVehicle() {
        cout << "Brand:               " << brand << endl;
        cout << "Manufactured Year:   " << yearOfManufacture << endl;
    }
};

class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity; 

public:
    void inputCarDetails() {
        inputVehicle();
        cout << "Enter Number of Doors: ";
        cin >> numberOfDoors;
        cout << "Enter Engine Capacity (Liters): ";
        cin >> engineCapacity;
    }

    void displayCar() {
        cout << "\n--- Registered Car Specifications ---" << endl;
        displayVehicle(); 
        cout << "Doors:               " << numberOfDoors << endl;
        cout << "Engine Capacity:     " << engineCapacity << "L" << endl;
    }
};

int main() {
    Car myCar;
    cout << "--- Registering a New Vehicle ---" << endl;
    myCar.inputCarDetails();
    myCar.displayCar();

    return 0;
}