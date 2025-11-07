#include <iostream>
using namespace std;

int main() {
    int number;
   double factorial = 1;  

    cout << "Enter a number to find its factorial: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        factorial = factorial * i;
    }

  
    cout << "\n Factorial of " << number << " = " << factorial << endl;

    return 0;
}
