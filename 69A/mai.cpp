#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int x[n], y[n], z[n];
        int xTotal = 0;
        int yTotal = 0;
        int zTotal = 0;
        for (int i = 0; i < n; i ++) {
            cin >> x[i] >> y[i] >> z[i];
            xTotal += x[i];
            yTotal += y[i];
            zTotal += z[i];
        }
    if (xTotal == 0 && yTotal == 0 && zTotal == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    }