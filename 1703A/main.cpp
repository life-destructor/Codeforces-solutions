#include <iostream>

using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> s;
        if (tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's') {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
