#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        while (n % 3 !=0) {
            n++;
            count++;
        }
        cout << count << "\n";
    }
    return 0;
}