#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    double result = 1;  

    cout << "Enter base number: ";
    cin >> base;
    cout << "Enter power): ";
    cin >> exponent;

    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    cout << "\n" << base << "^" << exponent << " = " << result << endl;

    return 0;
}
