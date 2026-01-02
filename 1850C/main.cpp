#include <iostream> 

using namespace std; 

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        char grid [8][8];
        string thisWord = "";
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                cin >> grid [j][k];
                if (grid[j][k] != '.') {
                    thisWord += grid[j][k];
                }
            }
        }
        cout << thisWord << "\n";
    }
    return 0;
}