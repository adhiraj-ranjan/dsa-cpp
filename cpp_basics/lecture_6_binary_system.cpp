#include <iostream>
using namespace std;

// Function to convert binary string to decimal integer
int binaryToDecimal(const string& binary) {
    int decimal = 0;
    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }
    return decimal;
}

// Function to convert decimal integer to binary string
string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";
    string binary = "";
    while (decimal > 0) {
        binary = char('0' + (decimal % 2)) + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    // Example usage:
    string bin = "1011";
    int dec = binaryToDecimal(bin);
    cout << "Binary " << bin << " to decimal: " << dec << endl;

    int num = 13;
    string binStr = decimalToBinary(num);
    cout << "Decimal " << num << " to binary: " << binStr << endl;

    return 0;
}