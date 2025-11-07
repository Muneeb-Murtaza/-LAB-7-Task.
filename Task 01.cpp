#include <iostream>
using namespace std;

int main() {
    int N,R;

    cout << "Enter a number to print its table: ";
    cin >> N;

    cout << "\n  Multiplication Table of " << N << ":\n";

    // For loop to print table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        R = N * i;
        cout <<  N << " x " << i << " = " <<  R  << endl;
    }

    return 0;
}
