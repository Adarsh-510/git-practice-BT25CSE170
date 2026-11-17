#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "      FIBONACCI SEQUENCE GENERATOR      " << endl;
    cout << "========================================" << endl;

    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    unsigned long long first = 0, second = 1;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << first << " ";
            continue;
        }
        if (i == 1) {
            cout << second << " ";
            continue;
        }
        unsigned long long next = first + second;
        first = second;
        second = next;
        cout << next << " ";
    }
    cout << endl;

    return 0;
}
