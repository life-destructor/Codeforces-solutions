#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, y, r;
        cin >> n >> y >> r;
        cout << min(n, r + (y/2)) << "\n";
    }
    // for (int i = 0; i < t; i++) {
    //     int n, y, r;
    //     cin >> n;
    //     cin >> y >> r;
    //     int suspend = r;
    //     if (suspend > n) {
    //         suspend -= (suspend - n);
    //     }
    //     if (y % 2 == 0) {
    //         suspend += (y/2);
    //         if (suspend > n) {
    //         suspend -= (suspend - n);
    //         }
    //     } else {
    //         y--;
    //         if (y != 0) {
    //             suspend += (y/2);
    //             if (suspend > n) {
    //         suspend -= (suspend - n);
    //             }
    //         }
    //     }
    //     cout << suspend << endl;
    // }
    return 0;
}