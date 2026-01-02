#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        long long total = 0;
        bool thisCase = false;
        long long a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j]; 
            total += a[j];
        }
        long long k = sqrt(total);
        if (k*k == total) {
            thisCase = true;
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
        // if (n == 1 && a[0] == 1 || total == 4) {
        //     cout << "YES\n";
        // } else {
        // if (thisCase == false) {
        //     cout << "NO\n";
        // }
    }
    return 0;
}