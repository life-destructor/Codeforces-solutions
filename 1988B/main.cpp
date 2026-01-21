#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        string n; cin >> n;
        string answer = "NO";
        if (n[0] == '1' && n[n.size()-1] == '1') {
            answer = "Yes\n";
        }
        int count = 0; //
        for (int i = 0; i <= n.size()-1; i++) {
            if (n[i] == '1' && n[i+1] == '1') {
                count++;
            }
        }
        if (count == 2) {
            answer = "Yes\n";
        }
        for (int i = 0; i < n.size()-3; i++) {
            if (n[i] == '1' && n[i+1] == '1' && n[i+2] == '1') {
                answer = "Yes\n";
            }
        }
        if ((n[0] == '1' && count >=1) || (n[n.size()-1] == '1' && count >= 1)) {
            answer = "yes\n";
        }
        cout << answer;
    }
    return 0;
}