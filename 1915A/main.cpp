#include <iostream>

using namespace std;

int main () {
    int a, b, c, t;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        int answer;
        if ((a == b) && a != c) {
            answer = c;
        } else if ((a == c) && a != b) {
            answer = b;
        } else {
            answer = a;
        }
        cout << answer << "\n";
    }
    return 0;
}