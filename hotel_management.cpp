/*
 * Student Name: Gathirua Lorna Titian
 * Admission No: BCS-03-116/2025
 * Description: Hotel management tracking financial and room occupancy using 1D, 2D, and 3D arrays
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    cout << "========================================" << endl;
    cout << "   HOTEL MANAGEMENT SYSTEM TRACKER      " << endl;
    cout << "========================================" << endl;

    // 1D Array - Weekly Revenue Tracker
    double revenue[7];
    double totalWeeklyRevenue = 0.0;
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    cout << "\n[1D ARRAY] Enter Revenue for the 7 Days of the Week:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << days[i] << " Revenue: KES ";
        cin >> revenue[i];
        totalWeeklyRevenue += revenue[i];
    }

    double averageDailyRevenue = totalWeeklyRevenue / 7.0;
    cout << "\n--- Financial Summary ---" << endl;
    cout << "Total Weekly Revenue: KES " << fixed << setprecision(2) << totalWeeklyRevenue << endl;
    cout << "Average Daily Revenue: KES " << averageDailyRevenue << endl;

    // 2D Array - Room Occupancy (One Branch)
    int occupancy[5][10]; 

    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; 
        }
    }

    cout << "\n[2D ARRAY] Occupancy Report (One Branch - Randomly Populated):" << endl;
    for (int floor = 0; floor < 5; floor++) {
        int occupiedCount = 0;
        int vacantCount = 0;
        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }
        cout << "Floor " << (floor + 1) << " -> Occupied: " << occupiedCount 
             << " | Vacant: " << vacantCount << endl;
    }

    // 3D Array - Multiple Branches
    int chain[3][5][10]; 
    int totalOccupiedAcrossChain = 0;

    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; 
                if (chain[branch][floor][room] == 1) {
                    totalOccupiedAcrossChain++;
                }
            }
        }
    }

    cout << "\n[3D ARRAY] Multi-Branch Status Summary:" << endl;
    cout << "Total Occupied Rooms across all 3 Branches: " << totalOccupiedAcrossChain << " / 150" << endl;

    return 0;
}