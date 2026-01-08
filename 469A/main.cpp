#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int a[p];
    set<int> levels;
    for (int i = 0; i < p; i++) {
        cin >> a[i];
        levels.insert(a[i]);
    }
    int q;
    cin >> q;
    int b[q];
    for (int i = 0; i < q; i++) {
        cin >> b[i];
        levels.insert(b[i]);
    }
    if (levels.size() == n) {
        cout << "I become the guy.\n";
    } else {
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}