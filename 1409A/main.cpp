#include <bits/stdc++.h>

using namespace std;

int main () {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int difference = abs(a - b);
        int answer;
        if (difference == 0) {
            answer = 0;
        } else if (difference <= 10){
            answer = 1;
        } else {
            answer = difference/10;
            if (difference % 10 > 0) {
                answer++;
            }
        }
        cout << answer << "\n";
    }
    return 0;
}