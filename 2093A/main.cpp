#include <iostream>

using namespace std;

int main () {
    int t, k;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> k;
        if (k > 0 && k % 2 != 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}