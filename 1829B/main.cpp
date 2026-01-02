#include <bits/stdc++.h>

using namespace std;

int main () {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n]; // 1 0 0 0 1 0 0 0 0 1
        int currentZeros = 0;
        int maxZeros = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                currentZeros++;
            } else {
                currentZeros = 0;
            }
            maxZeros = max(maxZeros, currentZeros);
        }
        cout << maxZeros << "\n";
    }
    return 0;
}