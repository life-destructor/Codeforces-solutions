#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    vector<int> xAxis(4);
    vector<int> yAxis(4);
    for (int i = 0; i < t; i++) {
        for (int i = 0; i < 4; i++) {
            cin >> xAxis[i] >> yAxis[i];
        }
        sort(xAxis.begin(), xAxis.end());
        sort(yAxis.begin(), yAxis.end());
        int length1 = abs(xAxis[0] - xAxis[3]);
        int length2 = abs(yAxis[0] - yAxis[3]);
        cout << length1 * length2 << "\n";
    }
    return 0;
}