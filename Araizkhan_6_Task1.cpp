#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // 1. Taking input from the user
    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    // 2. Calculations
    int remainder = num1 % num2;
    double average = (num1 + num2) / 2.0; // Dividing by 2.0 ensures decimal precision
    int square1 = num1 * num1;
    int square2 = num2 * num2;

    // 3. Displaying the output clearly
    cout << "\n--- Results ---" << endl;
    cout << "Remainder: " << remainder << endl;
    cout << "Average: " << average << endl;
    cout << "Square of first number: " << square1 << endl;
    cout << "Square of second number: " << square2 << endl;

    return 0;
}
