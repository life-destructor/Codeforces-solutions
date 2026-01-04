#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; 
    cin >> n;
    
    // 1. Calculate the base line
    // We start thinking around n/3. 
    // The "middle" element h2 is usually n/3 or n/3 + 1
    
    int h2, h1, h3;
    
    if (n % 3 == 0) {
        // Example n=6: 2 3 1
        h2 = n / 3;
        h1 = h2 + 1;
        h3 = h2 - 1;
    } 
    else if (n % 3 == 1) {
        // Example n=7: 2 4 1 (We have 1 extra block, must go to h1)
        h2 = n / 3;
        h1 = h2 + 2;
        h3 = h2 - 1;
    } 
    else { // n % 3 == 2
        // Example n=8: 3 4 1 (We have 2 extra blocks, one for h1, one for h2)
        h2 = n / 3 + 1;
        h1 = h2 + 1;
        h3 = n / 3 - 1;
    }

    cout << h2 << " " << h1 << " " << h3 << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); // Speed up I/O
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}