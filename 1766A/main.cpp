#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int t, n, sizeOfNum;
    string thisNum;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        int count = 0;
        thisNum = to_string(n);
        sizeOfNum = thisNum.size();
        count += 9 * (sizeOfNum - 1);
        count += thisNum[0] - '0';
        cout << count << endl;
    }
    return 0;
}