#include <iostream>
using namespace std;

int main() {
    // Define two integers
    int a = 12;    // Binary: 1100
    int b = 5;     // Binary: 0101

    // Bitwise AND
    int andResult = a & b;  // Binary: 0100 (which is 4 in decimal)
    cout << "a & b = " << andResult << endl;

    // Bitwise OR
    int orResult = a | b;   // Binary: 1101 (which is 13 in decimal)
    cout << "a | b = " << orResult << endl;

    // Bitwise XOR
    int xorResult = a ^ b;  // Binary: 1001 (which is 9 in decimal)
    cout << "a ^ b = " << xorResult << endl;

    // Bitwise NOT (Inverts bits of a)
    int notResult = ~a;     // Inverts 1100 to 0011 (which is -13 in two's complement)
    cout << "~a = " << notResult << endl;

    // Bitwise Left Shift (Shift a left by 2 positions)
    int leftShift = a << 2; // Binary: 110000 (which is 48 in decimal)
    cout << "a << 2 = " << leftShift << endl;

    // Bitwise Right Shift (Shift a right by 1 position)
    int rightShift = a >> 1; // Binary: 0110 (which is 6 in decimal)
    cout << "a >> 1 = " << rightShift << endl;

    return 0;
}
