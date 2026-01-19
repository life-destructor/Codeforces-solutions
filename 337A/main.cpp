#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> f(m);
    for (int i = 0; i < m; i++) {
        cin >> f[i];
    }
    sort(f.begin(), f.end());
    int minDiff = f[n-1] - f[0];

    for (int i = 1; i <= m - n; i++) {
        // The current window starts at 'i' and ends at 'i + n - 1'
        int current_diff = f[i + n - 1] - f[i];
        
        // If this window has a smaller difference, update our answer
        if (current_diff < minDiff) {
            minDiff = current_diff;
        }
    }
    cout << minDiff;
    return 0;
}
