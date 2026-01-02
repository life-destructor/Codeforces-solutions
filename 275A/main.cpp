#include <iostream>

using namespace std;

int main () {
    int lights[3][3];
    int toggle[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> toggle[i][j];
            if (toggle[i][j] % 2 == 0) {
                lights[i][j] = 1;
                // lights[i][j+1] = 1;
                // lights[i][j-1] = 1;
                // lights[i+1][j] = 1;
                // lights[i-1][j] = 1;
            } else {
                lights[i][j] = 0;
                // lights[i][j+1] = 0;
                // lights[i][j-1] = 0;
                // lights[i+1][j] = 0;
                // lights[i-1][j] = 0;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << lights[i][j];
            if (j == 2) {
                cout << "\n";
            }
        }
    }
    return 0;
}