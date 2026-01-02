#include <iostream>

using namespace std;

int main () {
    string s;
    string c = "codeforces";
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> s;
        int count = 0;
        for (int j = 0; j <=10; j++) {
            if (s[j] != c[j]) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}