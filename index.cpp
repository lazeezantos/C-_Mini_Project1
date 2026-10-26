#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char names[3][20];
    int marks[3][3];
    int total[3];
    double average[3];

    // Input students' names and marks
    for (int i = 0; i < 3; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin.getline(names[i], 20);

        cout << "Enter 3 marks: ";
        for (int j = 0; j < 3; j++) {
            cin >> marks[i][j];
        }

        // Calculate total
        total[i] = marks[i][0] + marks[i][1] + marks[i][2];

        // Calculate average
        average[i] = total[i] / 3.0;

        // Clear the newline before the next getline()
        cin.ignore(1000, '\n');

        cout << endl;
    }

    // Print mark sheet
    cout << "\n================ MARK SHEET ================\n";

    cout << left
         << setw(20) << "Name"
         << setw(10) << "M1"
         << setw(10) << "M2"
         << setw(10) << "M3"
         << setw(10) << "Total"
         << setw(10) << "Average" << endl;

    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < 3; i++) {
        cout << left
             << setw(20) << names[i]
             << setw(10) << marks[i][0]
             << setw(10) << marks[i][1]
             << setw(10) << marks[i][2]
             << setw(10) << total[i]
             << setw(10) << fixed << setprecision(1) << average[i]
             << endl;
    }

    // Find the top student
    int topStudent = 0;

    for (int i = 1; i < 3; i++) {
        if (average[i] > average[topStudent]) {
            topStudent = i;
        }
    }

    cout << "\nTop student: " << names[topStudent] << endl;

    return 0;
}
