#include <iostream>
using namespace std;

int main() {
    int N;
    double Hn = 0.0;

    cout << "Enter a number (N): ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        Hn += 1.0 / i;
    }

    cout << "The " << N << "th Harmonic Number is: " << Hn << endl;

    return 0;
}
