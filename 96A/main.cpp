#include <iostream>

using namespace std;

int main()
{
    string s;
    int count = 0;
    string isDangerous = "NO";
    cin >> s;
    //00100110111111101
    if (s.size() < 7) {
        cout << "NO";
    } else {
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                count ++;
            } else {
                count = 0;
            }
            if (count == 6) {
                isDangerous = "YES";
            }
        }
        cout << isDangerous;
    }
    return 0;
}
