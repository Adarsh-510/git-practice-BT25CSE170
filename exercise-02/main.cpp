#include <iostream>

using namespace std;

unsigned long long calculateFactorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    cout << "========================================" << endl;
    cout << "         FACTORIAL CALCULATOR           " << endl;
    cout << "========================================" << endl;

    int n;
    cout << "Enter a non-negative integer (0 - 20): ";
    if (!(cin >> n)) {
        cerr << "Error: Invalid input. Please enter an integer." << endl;
        return 1;
    }

    if (n < 0) {
        cerr << "Error: Factorial is undefined for negative numbers (" << n << ")." << endl;
        return 1;
    }

    if (n > 20) {
        cerr << "Error: " << n << "! exceeds 64-bit unsigned integer capacity (max supported is 20)." << endl;
        return 1;
    }

    unsigned long long result = calculateFactorial(n);
    cout << "Result: " << n << "! = " << result << endl;

    return 0;
}
