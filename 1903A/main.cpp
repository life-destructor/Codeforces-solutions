#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        bool checkFlag = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i > 0) {
                if (a[i] < a[i-1]) {
                    checkFlag = false;
                }
            }
        }
        if (checkFlag == true) {
            cout << "YES\n";
        } else {
            if (k > 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}