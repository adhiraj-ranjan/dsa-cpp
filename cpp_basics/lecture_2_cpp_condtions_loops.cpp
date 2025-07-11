#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 20;
    // Example ternary statement 
    cout << (a > b ? "a is greater than b" : "a is not greater than b") << endl;

    cout << (2 >= 0 ? "postive" : "negative") << endl;

    // Example while loop
    int count = 0;
    while (count < 5) {
        cout << "Count is: " << count << endl;
        count++;
    }

    // Example for loop
    for (int i = 0; i < 5; i++) {
        cout << "For loop iteration: " << i << endl;
    }
    cout << "Hello, World!" << std::endl;
    
    // practice questions
    
    // sum of all odd numbers from 1 to n
    int n = 10;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {     
            sum += i;
        }
    }
    cout << "Sum of odd numbers from 1 to " << n << " is: " << sum << endl;


    // nested loops
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {                                                                  
            cout << "i: " << i << ", j: " << j << endl;
        }
    }
    return 0;
}