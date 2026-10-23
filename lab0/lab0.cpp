/**
 * @file lab0.cpp
 * @brief Lab 0 for Software Development II
 *
 * @details A math program calculating the sum of two numbers, the area of a
 *          circle given its radius, the circumference given its radius, and
 *          a price including VAT given the price and VAT.
 *
 * @author Sasha Fard
 * @version 0.1
 * @date 23.10.2026
 * @copyright University of Nicosia.
 */

#include <iostream>
using namespace std;

/** @brief Constant value of pi. */
const double PI = 3.14;

// Function prototypes
double sumTwoNumbers(double num1, double num2);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);
double priceIncludingVAT(double price, int vat);

/**
 * @brief Starting point of the program.
 */
int main()
{
    int choice;

    do {

        // Displays the menu
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
            /// @todo choice == 0 means exit program.
            break;

        case 1:
            cout << "Sum is: " << sumTwoNumbers(2, 3) << endl << endl; // two endl for pretty reasons.
            break;

        case 2:
            cout << "Area is: " << areaOfCircle(-2.0) << endl << endl;
            break;

        case 3:
            cout << "Circumference is: " << circumferenceOfCircle(2) << endl << endl;

            break;

        case 4:

            break;

        default:
            cerr << "Wrong choice, try again." << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}

/**
 * @brief Returns the sum of two given numbers.
 * @param num1 The first number.
 * @param num2 The second number.
 * @return The sum of @p num1 and @p num2.
 */
double sumTwoNumbers(double num1, double num2) {
    return num1 + num2;
}

/**
 * @brief Returns the area of a circle using the given radius.
 * @param radius The radius of the circle.
 * @return The area of the circle, or -1 if @p radius is negative.
 * @todo Make the function more robust.
 */
double areaOfCircle(double radius) {
    double area = -1;

    if (radius > 0) {
        area = PI * radius * radius;
    }
    return area;
}

/**
 * @brief Returns the circumference of a circle using the given radius.
 * @param radius The radius of the circle.
 * @return The circumference of the circle.
 */
double circumferenceOfCircle(double radius) {
    double circumference = 2 * PI * radius;
    return circumference;
}

/**
 * @brief Returns the price including VAT using the given price and VAT rate.
 * @param price The base price.
 * @param vat The VAT rate (e.g. 19 for 19%).
 * @return The price including VAT.
 */
double priceIncludingVAT();