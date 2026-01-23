#include <bits/stdc++.h>

using namespace std;

int main () {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string s;
        cin >> s;
        int specialChar = s[n-1];
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != specialChar) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}