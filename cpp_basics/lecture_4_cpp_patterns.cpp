#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the square

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "* ";
        }
        cout << endl;
    } 
    // Triangle pattern
    cout << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    // Floyd's Triangle pattern
    cout << endl;
    int num = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << num << " ";
            ++num;
        }
        cout << endl;
    }

    // Pyramid pattern
    cout << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    // Hollow diamond pattern
    cout << endl;
    // Upper half
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            if (j == 0 || j == 2 * i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    // Lower half
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            if (j == 0 || j == 2 * i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}