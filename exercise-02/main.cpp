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
    cout << "Enter a non-negative integer: ";
    cin >> n;

    unsigned long long result = calculateFactorial(n);
    cout << "Factorial of " << n << " = " << result << endl;

    return 0;
}
