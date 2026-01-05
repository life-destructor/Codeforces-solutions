#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    string thisNumber = to_string(n);
    string answer;
    int lastPosition = thisNumber.size()-1;
    int secondToLastPosition = thisNumber.size()-2;
    if (n >0) {
        answer = thisNumber;
    } else {
        if (thisNumber[lastPosition] > thisNumber[secondToLastPosition]) {
            thisNumber.erase(thisNumber.size()-1, 1);
        } else {
            thisNumber.erase(thisNumber.size()-2, 1);
        }
        answer = thisNumber;
        if (answer == "-0") {
            answer.erase(0,1);
        }
    }
    cout << answer;
    return 0;
}