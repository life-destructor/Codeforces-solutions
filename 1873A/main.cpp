#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        // If at least one letter is in the correct spot, 
        // the other two can be swapped to fix the string.
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}