// lab0.cpp : This file contais a small math programm.
// Author: Sasha Fard @ssfard test

#include <iostream>
using namespace std;

// Function prototypes
double sumTwoNumbers(double num1, double num2);

// Starting point of programm.
int main()
{
    int choice;

    do {

        // Menu
        cout << "0) Exit" << endl;
        cout << "1) Sum two numbers" << endl;
        cout << "2) Calculate the area of a circle" << endl;
        cout << "3) Calculate the circumference of a circle" << endl;
        cout << "4) Calculate price with VAT" << endl;
        cout << "Enter choice: ";

        cin >> choice;
        cout << endl; // makes it pretty.

        switch (choice) {

        case 0:
            // @todo choice == 0 means exit programm.
            break;

        case 1:
            cout << "Sum is: " << sumTwoNumbers(2, 3) << endl << endl; // two endl for pretty reasons.
            break;

        case 2:

            break;

        case 3:

            break;

        case 4:

            break;

        default:
            cerr << "Wrong choice, try again." << endl;
            break;
        }

    } while ( choice != 0);

    return 0;
}

// Returns the sum of two given numbers
double sumTwoNumbers(double num1, double num2) {
    return num1 + num2;
}

