#include <bits/stdc++.h>

using namespace std;

int main () {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, a;
        cin >> n >> a;
        vector <int> v(n); 
        int l = 0;
        int m = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] < a) {
                l++;
            } else if (v[i] > a) {
                m++;
            }
        }
        // Logic: Expand the majority side
        if (l > m) {
            cout << a - 1 << "\n"; 
        } else {
            cout << a + 1 << "\n";
        }
    }
    return 0;
}