#include <iostream>

using namespace std;

int main () {
    int t;
    char c;
    string word = "codeforces";
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> c;
        int count = 0;
        for (int i = 0; i < 10; i++) {
            if (c == word[i]) {
                count++;
            }
        }
        if (count > 0) {
            cout << "Yes\n"; 
        } else {
            cout << "No\n";
        }
    }
    return 0;
}