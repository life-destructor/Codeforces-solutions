#include <bits/stdc++.h>

using namespace std;

int main () {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        // sort(b.begin(), b.end()); found a better way
        sort(b.begin(), b.end(), greater<int>()); // Sort b descending (easier to access largest)
        for (int i = 0; i < k; i++) {
            if (a[i] < b[i]) {
                swap(a[i], b[i]);
            } else {
                break;
            }
        }
        long long finalSum = 0;
        for (int i = 0; i < a.size(); i++) {
            finalSum += a[i];
        }
        cout << finalSum << "\n";
    }
    return 0;
}