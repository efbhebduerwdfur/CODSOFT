#include <iostream>
using namespace std;

int main() {
    double number1, number2, result;
    char op;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        result = number1 + number2;
        cout << "Result: " << result << endl;
    } else if (op == '-') {
        result = number1 - number2;
        cout << "Result: " << result << endl;
    } else if (op == '*') {
        result = number1 * number2;
        cout << "Result: " << result << endl;
    } else if (op == '/') {
        if (number2 != 0) {
            result = number1 / number2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Cannot divide by zero." << endl;
        }
    } else {
        cout << "Invalid operator." << endl;
    }

    return 0;
}
