#include <iostream>
#include <iomanip>

using namespace std;

void showHeader() {
    cout << "========================================" << endl;
    cout << "        ARITHMETIC CALCULATOR           " << endl;
    cout << "========================================" << endl;
}

int main() {
    showHeader();

    double num1, num2;
    char op;

    cout << "Enter first number: ";
    if (!(cin >> num1)) {
        cerr << "Error: Invalid numeric input for first operand." << endl;
        return 1;
    }

    cout << "Enter operator (+, -, *, /): ";
    if (!(cin >> op)) {
        cerr << "Error: Invalid operator input." << endl;
        return 1;
    }

    cout << "Enter second number: ";
    if (!(cin >> num2)) {
        cerr << "Error: Invalid numeric input for second operand." << endl;
        return 1;
    }

    cout << fixed << setprecision(2);

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
            if (num2 == 0.0) {
                cerr << "Error: Division by zero is undefined." << endl;
                return 1;
            }
            cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            break;
        default:
            cerr << "Error: Unsupported operator '" << op << "'. Allowed: +, -, *, /" << endl;
            return 1;
    }

    return 0;
}
