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
#include <cassert>

using namespace std;

/** @brief Constant values */
const double PI = 3.14;

// Function prototypes
double sumTwoNumbers(double num1, double num2);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);
double priceIncludingVAT(double price, double vat);

int readInt();
double readDouble();


/**
 * @brief Starting point of the program.
 */
int main()
{
    int user_choice;
    double user_entry_1 = 0, user_entry_2 = 0;

    do {

        // Displays the menu
        cout << "0) Exit" << endl;
        cout << "1) Sum two numbers" << endl;
        cout << "2) Calculate the area of a circle" << endl;
        cout << "3) Calculate the circumference of a circle" << endl;
        cout << "4) Calculate price with VAT" << endl;
        cout << "Enter choice: ";

        user_choice = readInt();

        cout << endl; // makes it pretty.

        switch (user_choice) {

        case 0:
            /// @todo choice == 0 means exit program.
            break;

        case 1:

            user_entry_1 = 0, user_entry_2 = 0;

            cout << "Enter two numbers:" << endl;

            cout << "Enter number 1: ";
            user_entry_1 = readDouble();
                
            cout << "Enter number 2: ";
            user_entry_2 = readDouble();
 
                cout << "Sum is: " << sumTwoNumbers(user_entry_1, user_entry_2) << endl << endl; // two endl for pretty reasons.
           
            break;

        case 2:

            user_entry_1 = 0;
            
            cout << "Enter radius: ";
            user_entry_1 = readDouble();

            cout << "Area is: " << areaOfCircle(user_entry_1) << endl << endl;

            break;

        case 3:

            user_entry_1 = 0;

            cout << "Enter radius: ";
            user_entry_1 = readDouble();

            cout << "Circumference is: " << circumferenceOfCircle(user_entry_1) << endl << endl;

            break;

        case 4:

            user_entry_2 = 0; user_entry_1 = 0;

            cout << "Enter price without VAT: ";
            user_entry_1 = readDouble();

            cout << "Enter VAT: ";
            user_entry_2 = readDouble();

            cout << "Price with VAT is: " << priceIncludingVAT(user_entry_1,user_entry_2) << endl << endl;

            break;

        default:
            cerr << "Wrong choice, try again." << endl;
            break;
        }

    } while (user_choice != 0);

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
 * @todo make the code more robust.
 */
double priceIncludingVAT(double price, double vat) {

    double total = price + (price / 100 * vat);
    return total;
}

/**
 * @brief Reads an int from cin, retrying until a valid number is entered.
 * @return The number the user typed.
 */
int readInt()
{
    int value;
    while (!(cin >> value)) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Not a number, try again: ";
    }
    return value;
}

/**
* @brief Reads a double from cin, retrying until a valid number is entered.
* @return The number the user typed.
*/
double readDouble()
{
    double value;
    while (!(cin >> value)) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Not a number, try again: ";
    }
    return value;
}