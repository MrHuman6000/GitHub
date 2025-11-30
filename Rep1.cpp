#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Input a number of your choice: ";
    cin >> i;
    cout << "You have entered: " << i << endl;

    switch(i) {
        case 1:
            cout << "You entered one." << endl;
            break;
        case 2:
            cout << "You entered two." << endl;
            break;
        default:
            cout << "You entered a number other than one or two." << endl;
            break;
    }
    return 0;
}