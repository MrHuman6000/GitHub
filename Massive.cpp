#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>
using namespace std;

int main() {
    int x;
    int A[17] = { -10, -9, -6, -4, -3, -2, -1, 0, 2, 4, 5, 6, 7, 8, 9, 10, 12 };
    cout << "Massive A: ";
    while (true) {
        cout << "Input limit: ";
        cin >> x;
        if (x >= -10 && x <= 12) break;
        cout << "Incorrect value";
    }
    cout << "Numbers >= " << x << ": ";
    for (int i = 0; i < 17; i++) {
        if (A[i] >= x) cout << A[i] << " ";
    } 
    return 0;
}
