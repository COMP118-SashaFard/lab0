// lab0.cpp : This file contais a small math programm.
// Author: Sasha Fard @ssfard test

#include <iostream>
using namespace std;

// Global variables
const double PI = 3.14;

// Function prototypes
double sumTwoNumbers(double num1, double num2);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);
double priceIncludingVAT(double price, int vat);

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
            cout << "Area is: " << areaOfCircle(-2.0) << endl << endl;
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

// Returns the area of a circle using given radius
// Returns -1 in case if given radius in negative
double areaOfCircle(double radius) {
    double area = -1;

    if (radius > 0) {
        area = PI * radius * radius;
    }
    return area;
}

// Returns circumference of a cirlce using given radius
double circumferenceOfCircle();

// Returns price including VAT using given price and VAT rate
double priceIncludingVAT();