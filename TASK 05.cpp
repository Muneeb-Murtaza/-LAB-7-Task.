#include <iostream>
using namespace std;

int main() {
    double caloriesPerMinute = 3.6;
    double caloriesBurned;

    for (int minutes = 5; minutes <= 30; minutes += 5) {
        caloriesBurned = minutes * caloriesPerMinute;
        cout << "After " << minutes << " minutes, you have burned " << caloriesBurned << " calories." << endl;
    }

    return 0;
}



