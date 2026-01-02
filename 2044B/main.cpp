#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    string a;
    for (int i = 0; i < t; i++) {
        cin >> a;
        string b = "";
        for (int i = a.size()-1; i >= 0; i--) {
            if (a[i] == 'p') {
                b += 'q';
            } else if (a[i] == 'q') {
                b += 'p';
            } else {
                b += 'w';
            }
        }
        cout << b << endl;
    }
    return 0;
}