#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        char c;
        cin >> s;
        cin >> c;
        int count = 0;
        bool changePossible = false;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == c) {
                count++;
            }
        }
        if (count > 1) {
        for (int k = 0; k < s.size(); k++) {
            if (s[k] == c && count > 1) {
                s[k] = s[k-1];
                count--;
            }
        }
    }
        do {
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] != c && s[i+1] != c) {
                s.erase(i,1);
                s.erase(i+1,1);
                changePossible = true;
            } else {
                changePossible = false;
            }
        }
    } while (s.size() > 1 || changePossible = false);
    }
    return 0;
}