#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, s;
        cin >> n >> s;
        int x[n];
        for (int j = 0; j < n; j++) {
            cin >> x[j];
        }
        int totalDistance = 0;
        // so s is starting position on the X axis.
        // we can do either s + 1 or s - 1.
        // so basically find distance if starting position is in the middle. Then the least distnace, multiply that by two, and add
        // the more distance with it.
        // we first need to determine where the starting position is.
        if (s > x[0] && s < x[n-1]) {
            if ((s - x[0]) < (x[n-1] - s)) {
                totalDistance += (s-x[0]) * 2;
                totalDistance += (x[n-1] - s);
            } else {
                totalDistance += (x[n-1] - s) * 2;
                totalDistance += (s-x[0]);
            }
        } else if (s >= x[n-1]) {
            totalDistance += s - x[0];
        } else if (s <= x[0]) {
            totalDistance += x[n-1] - s;
        }
        cout << totalDistance << endl;
    }
    return 0;
}