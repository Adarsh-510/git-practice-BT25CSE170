#include <iostream>
#include <vector>

using namespace std;

void generateFibonacci(int n) {
    if (n <= 0) return;

    unsigned long long a = 0, b = 1;
    cout << "Fibonacci Sequence (" << n << " terms):" << endl;

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << a;
        } else if (i == 2) {
            cout << ", " << b;
        } else {
            unsigned long long next = a + b;
            a = b;
            b = next;
            cout << ", " << next;
        }
    }
    cout << endl;
}

int main() {
    cout << "========================================" << endl;
    cout << "      FIBONACCI SEQUENCE GENERATOR      " << endl;
    cout << "========================================" << endl;

    int n;
    cout << "Enter number of terms (1 - 90): ";
    if (!(cin >> n)) {
        cerr << "Error: Invalid input. Please enter a valid integer." << endl;
        return 1;
    }

    if (n <= 0) {
        cerr << "Error: Number of terms must be a positive integer greater than 0." << endl;
        return 1;
    }

    if (n > 90) {
        cerr << "Error: Number of terms exceeds 90 (values beyond 90 exceed 64-bit unsigned integer capacity)." << endl;
        return 1;
    }

    generateFibonacci(n);
    return 0;
}
