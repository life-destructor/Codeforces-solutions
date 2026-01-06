#include <bits/stdc++.h>

using namespace std;

int main () {
    set<int> colors;
    int temp;
    for (int i = 0; i < 4; i++) {
        cin >> temp;
        colors.insert(temp);
    }
    cout << 4 - colors.size();

    return 0;
}