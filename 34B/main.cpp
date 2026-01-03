#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int total = 0;
    int index;

    // cout << "Test here\n";
    // for (int i = 0; i < a.size(); i++) {
    //     cout << a[i] << "\n";
    // }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 0) {
            index = i;
            break;
        }
    }
    // cout << "Index should be " << index << "\n";
    for (int i = 0; (i < index && i < m); i++) {
        if (a[i] < 0) {
        total += abs(a[i]);
        } else {
            total -= a[i];
        }
    }
    // cout << "answer is ";
    cout << total << "\n";
    return 0;
}