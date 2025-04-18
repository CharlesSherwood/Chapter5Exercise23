/*FileName:Chapter5Exercise23.cpp
ProgrammerName:Charles Sherwood
Date:4/2025
Requirements:this program should display 2 different patterns 
depending on what the user inputs into the system,
*/



#include <iostream>
using namespace std;

// Function Prototypes
void displayPatternA(int rows);
void displayPatternB(int rows);

// Main module
int main()
{
    int rows;
    char choice;

    do {
        // Input validation loop
        do {
            cout << "Enter number of rows for the patterns (1 - 20): ";
            cin >> rows;

            if (cin.fail() || rows < 1 || rows > 20) {
                cout << "Invalid input. Please enter a number between 1 and 20.\n";
                cin.clear();
                cin.ignore(10000, '\n');
            }
        } while (rows < 1 || rows > 20);

        // Display the patterns
        displayPatternA(rows);
        cout << "\n--------------------\n";
        displayPatternB(rows);

        // Ask user if they want to repeat
        cout << "\nWould you like to run the program again? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Thank you for using the pattern display program!\n";
    return 0;
}

// Function to display Pattern A (increasing '+' symbols)
void displayPatternA(int rows) {
    cout << "\nPattern A\n";
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "+";
        }
        cout << endl;
    }
}

// Function to display Pattern B (decreasing '+' symbols)
void displayPatternB(int rows) {
    cout << "\nPattern B\n";
    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "+";
        }
        cout << endl;
    }
}
