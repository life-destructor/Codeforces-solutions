#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> thisString;
    string temp;
    for (int i = 0; i < n - 1; i++) {
        thisString.push_back(s.substr(i, 2));
    }
    sort(thisString.begin(), thisString.end());
    int currentStreak = 1;
    int maxStreak = 0;
    string ans = thisString[0];
    for (int i = 0; i < thisString.size() - 1; i++) {
        if (thisString[i] == thisString[i+1]) {
            currentStreak++;
            if (maxStreak < currentStreak) {
                maxStreak = currentStreak;
                ans = thisString[i];
            }
        } else {
            currentStreak = 1;
        }
    }
    cout << ans;
    return 0;
}