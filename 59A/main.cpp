#include <iostream>

using namespace std;

int main()
{
    string s;
    int totalLower = 0;
    int totalUpper = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i]) != 0) {
            totalLower++;
        } else {
            totalUpper++;
        }
    }
    if (totalUpper > totalLower) {
        for (int i = 0; i < s.size(); i++) {
            if (islower(s[i]) != 0) {
                s[i] = toupper(s[i]);
                } else {
                    s[i] = s[i];
                }
        }
    } else {
        // make everything lower
        for (int i = 0; i < s.size(); i++) {
            if (islower(s[i]) == 0) {
                s[i] = tolower(s[i]);
            } else {
                s[i] = s[i];
            }
        }
    }
    cout << s;
    return 0;
}
