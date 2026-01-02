#include <iostream>

using namespace std;

int main () {
    int n [5][5];
    int startPositionX, startPositionY;
    // int beautifulPositionX = 2;
    // int beautifulPositionY = 2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> n[i][j];
            if (n[i][j] == 1) {
                startPositionX = i;
                startPositionY = j;
            }
        }
    }
    int moves = 0;
    if (startPositionX > 2) {
        moves += (startPositionX - 2);
    } else {
        moves += (2 - startPositionX);
    }
    if (startPositionY > 2) {
        moves += (startPositionY - 2);
    } else {
        moves += 2 - startPositionY;
    }
    cout << moves;

    return 0;
}