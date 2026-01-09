#include <bits/stdc++.h>

using namespace std;

int main () {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string cells;
        cin >> cells;
        int count = 0;
        bool checkFlag = false;
        for (int i = 1; i <= n-2; i++) {
            if ((cells[i-1] == '.') && (cells[i] == '.') && (cells[i+1] == '.')) {
                checkFlag = true;
            }
        }
        for (int i = 0; i < n; i++) {
            if (cells[i] == '.') {
                count++;
            }
        }
        if (checkFlag) {
            count = 2;
        }
        cout << count << "\n";
    }
    return 0;
}