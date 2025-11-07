#include <iostream>
using namespace std;

int main() {
    int num;
   double factorial = 1;  

    cout << "Enter a number to find its factorial: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

  
    cout << "\n Factorial of " << num << " = " << factorial << endl;

    return 0;
}
