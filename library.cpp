#include <iostream>

using namespace std;

int main() {
    // i. Declare variables for user inputs
    int bookID;
    int dueDate;
    int returnDate;
    
    // Additional calculation variables
    int daysOverdue = 0;
    int fineRate = 0;
    int fineAmount = 0;

    // Prompt user for input
    cout << "Enter Book ID: ";
    cin >> bookID;

    cout << "Enter Due Date (as an integer day): ";
    cin >> dueDate;

    cout << "Enter Return Date (as an integer day): ";
    cin >> returnDate;

    // ii. Calculate the days overdue
    daysOverdue = returnDate - dueDate;

    // Ensure negative days (early returns) default to 0 days overdue
    if (daysOverdue < 0) {
        daysOverdue = 0;
    }

    // iii. Use an if...else statement to determine fine rate and total fine
    if (daysOverdue == 0) {
        fineRate = 0;
        fineAmount = 0;
    }
    else if (daysOverdue <= 7) {
        fineRate = 20;
        fineAmount = daysOverdue * fineRate;
    }
    else if (daysOverdue >= 8 && daysOverdue <= 14) {
        fineRate = 50;
        fineAmount = daysOverdue * fineRate;
    }
    else { // 15 days or more
        fineRate = 100;
        fineAmount = daysOverdue * fineRate;
    }

    // iv. Display all requested elements
    cout << "\n=== Library System Invoice ===\n";
    cout << "Book ID        : " << bookID << endl;
    cout << "Due Date       : " << dueDate << endl;
    cout << "Return Date    : " << returnDate << endl;
    cout << "Days Overdue   : " << daysOverdue << " day(s)" << endl;
    cout << "Fine Rate      : Ksh. " << fineRate << " per day" << endl;
    cout << "Total Fine     : Ksh. " << fineAmount << endl;

    return 0;
}
