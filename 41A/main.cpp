#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s; //a
    cin >> t; //aa
    int count = 0;
    int sizeT = t.size() - 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t[sizeT]) {
            count++;
            sizeT--;
        }
    }
    if (s.size() != t.size()) {
        cout << "NO\n";
    } else if (count == t.size()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
