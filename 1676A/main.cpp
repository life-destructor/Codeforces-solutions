#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int t;
    string thisNumber;
    cin >> t;
    while (t--) {
        cin >> thisNumber;
        int n = thisNumber.size();
    if ((thisNumber[0] + thisNumber[1] + thisNumber[2]) ==  (thisNumber[n-1] + thisNumber[n-2] + thisNumber[n-3])){
            cout << "Yes\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}