#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int count = 0;
        int last_1_index = -k - 100; 

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                last_1_index = i; 
            } else {
                if (i - last_1_index > k) {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}