#include <iostream>

using namespace std;

int main () {
    int n; int count = 1;
    cin >> n;
    string s[n], checkValue;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    checkValue = s[0];
    for (int i = 0; i < n; i++) {
        if (s[i] != checkValue) {
            count++;
            checkValue = s[i];
        }
    }
    cout << count;
    return 0;
}