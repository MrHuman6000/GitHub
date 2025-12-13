#include <iostream>
#include <string>
using namespace std;

int main() {
    string playerName;
    int health = 20;
    int blocksMined = 0;
    string response;

    cout << "Enter your Minecraft player name: ";
    cin >> playerName;

    cout << "Are you have a license to play Minecraft? (yes/no): ";
    string licenseResponse;
    cin >> licenseResponse;

    if (licenseResponse != "yes") {
        cout << "You need a license to play Minecraft. Exiting the game." << endl;
        return 0;
    }

    cout << "\nWelcome, " << playerName << "!" << endl;
    cout << "Health: " << health << endl;

    while (health > 0) {
        cout << "\nYou mine a block..." << endl;
        cout << "Are you sure that you want to mine this block? (yes/no): ";
        cin >> response;

        if (response == "yes") {
            blocksMined++;
            health -= 5;

            if (health < 0) health = 0;

            cout << "You're mining the block and your health equals " << health << "." << endl;
        } else {
            cout << "You chose not to mine the block." << endl;
            break;
        }
    }

    if (health == 0) {
        cout << "You died while mining." << endl;
    }

    cout << "Blocks mined: " << blocksMined << endl;
    cout << "Game simulation finished." << endl;

    return 0;
}
