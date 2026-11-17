#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "        ARITHMETIC CALCULATOR           " << endl;
    cout << "========================================" << endl;

    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}
