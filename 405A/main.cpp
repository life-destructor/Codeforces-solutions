#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    vector<int> columns(n);
    int changeInColumns[n-1];
    for (int i = 0; i < n; i++) {
        cin >> columns[i];
        // changeInColumns[i] = 0;
    }
    sort(columns.begin(), columns.end());
    for (int i = 0; i < n; i++) {
        cout << columns[i] << " ";
    }

    // lmao, such a simple solution, what was I even thinking lmao


    // for (int i = n-1; i >= 0; i--) {
    //     for (int j = 0; j < n; j++) {
    //         if (columns[j] != columns[i]) {
    //             if ((columns[j] > columns[i]) && (changeInColumns[i] < (columns[j] - columns[i]))) {
    //                 changeInColumns[i] = columns[j] - columns[i];
    //                 columns[j] -= changeInColumns[i];
    //             }
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++) {
    //     columns[i] += changeInColumns[i];
    //     cout << columns[i] << " ";
    // }
    return 0;
}