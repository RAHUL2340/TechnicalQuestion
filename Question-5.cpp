//Problem 5: Swap two numbers without using a temporary variable
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;

    // Swap without a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}