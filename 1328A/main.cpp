#include <iostream>

using namespace std;

int main () {
    long long t;
    cin >> t;
    long long a, b;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        int count = 0;
        if (a % b == 0) {
            cout << count << "\n";
        } else {
            cout << b - (a % b) << "\n";
        }
    }
    return 0;
}