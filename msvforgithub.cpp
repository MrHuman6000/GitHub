#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int A[10][10];
    srand(time(NULL));
    cout << "Initial matrix:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            A[i][j] = rand() % (20 - (-7) + 1) - 7;
            cout << A[i][j] << "\t";
        }
    }
    cout << "Mod: \n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (A[i][j] < 0) A[i][j] = 6;
            cout << A[i][j] << "\t";
        }
    }
    system ("pause");
    return 0;
}
