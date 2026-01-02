#include <iostream>

using namespace std;

int main () {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int match = 0;
        int thisIndex;
        int a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        for (int k = 1; k < n; k++) {
            if (a[0] != a[k]) { // so 3,1,1
                match++;
                thisIndex = k+1;
            }
        }
        if (match == 1) {
            cout << thisIndex << endl;
        } else {
            cout << "1\n";
        }

    }
}