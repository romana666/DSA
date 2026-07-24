//"Calculator" program

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // 1. Input: Ask the user to enter two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\n--- Calculator Results ---\n";

    // 2. Sum (Addition)
    cout << "Sum: " << (num1 + num2) << endl;

    // 3. Difference (Subtraction)
    cout << "Difference: " << (num1 - num2) << endl;

    // 4. Product (Multiplication)
    cout << "Product: " << (num1 * num2) << endl;

    // 5. Division and Modulo
    // We check if num2 is not 0 to avoid a division-by-zero error
    if (num2 != 0) {
        cout << "Division: " << (num1 / num2) << endl;
        cout << "Modulo (Remainder): " << (num1 % num2) << endl;
    } else {
        cout << "Division & Modulo: Cannot divide by zero!" << endl;
    }

    return 0;
}