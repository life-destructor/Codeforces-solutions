#include <iostream>

using namespace std;

int main () {
    int n;
    string s;
    int countAnton = 0; int countDevin = 0;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            countAnton++;
        } else {
            countDevin++;
        }
    }
        if (countAnton > countDevin) {
            cout << "Anton\n";
        } else if (countAnton < countDevin) {
            cout << "Danik\n";
        } else {
            cout << "Friendship\n";
        }
    return 0;
}