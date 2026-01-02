#include <iostream>

using namespace std;

int main () {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int oneHealth = 0;
        int moreHealth = 0;
        int h[n];
        int totalMoves = 0;
        for (int j = 0; j < n; j++) {
            cin >> h[j];
            if (h[j] == 1) {
                oneHealth++;
            } else {
                moreHealth++;
            }
        }
        if (oneHealth % 2 == 0) {
            totalMoves += oneHealth/2;
            totalMoves += moreHealth;
        } else {
            totalMoves += ((oneHealth - 1)/2);
            totalMoves += moreHealth + 1;
        }
        cout << totalMoves << "\n";
    }
    return 0;
}