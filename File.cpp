#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char names[5][20];
    int marks[5][3];
    int total[5];
    double average[5];

    // Input students' names and marks
    for (int i = 0; i < 5; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin.getline(names[i], 20);

        cout << "Enter 3 marks: ";
        for (int j = 0; j < 3; j++) {
            cin >> marks[i][j];
        }

        total[i] = marks[i][0] + marks[i][1] + marks[i][2];

        average[i] = total[i] / 3.0;

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

    for (int i = 0; i < 5; i++) {
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

    for (int i = 1; i < 5; i++) {
        if (average[i] > average[topStudent]) {
            topStudent = i;
        }
    }

    cout << "\nTop student: " << names[topStudent] << endl;

    return 0;
}
