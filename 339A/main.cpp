#include <iostream>

using namespace std;

int main()
{
    string s;
    char temp;
    cin >> s;
    for (int j = 0; j < s.size(); j++) {
    for (int i = 2; i < s.size(); i += 2) {
        if (s[i] < s[i-2]) {
            temp = s[i-2];
            s[i-2] = s[i];
            s[i] = temp;
        }
    }
    }
    cout << s;
    return 0;
}
