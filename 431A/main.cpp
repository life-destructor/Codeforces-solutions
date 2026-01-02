#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a1, a2, a3, a4;
    int total = 0;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            total += a1;
        } else if (s[i] == '2') {
            total += a2;
        } else if (s[i] == '3') {
            total += a3;
        } else {
            total += a4;
        }
    }
    cout << total;
    return 0;
}
