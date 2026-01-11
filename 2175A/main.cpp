#include <bits/stdc++.h>

using namespace std;

int main () {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a;
        set<int> colors;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            a.push_back(temp);
            colors.insert(temp);
        }
        int distinct = colors.size();
        // cout << "this is test. size of colors should be 1, but it is: " << count << "\n";
        while (colors.count(distinct) == 0) {
            distinct++;
        }
        cout << distinct << "\n";
    }
    return 0;
}
