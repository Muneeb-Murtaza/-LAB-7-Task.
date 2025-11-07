#include <iostream>
using namespace std;

int main() {
    double CPM= 3.6;
    double CB;

    for (int min = 5; min <= 30; min += 5) {
        CB= min * CPM;
        cout << "After " << min<< " minutes, you have burned " << CB << " calories." << endl;
    }

    return 0;
}




