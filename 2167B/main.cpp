#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int ts, n;
    string s, t;
    cin >> ts;
    for (int i = 1; i <= ts; i++) {
        cin >> n;
        cin >> s >> t;
        int count = 0;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < n; i++) {
            if (s[i] != t[i]) {
                count++;
            }
        }
        if (count != 0) {
            cout << "no\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}