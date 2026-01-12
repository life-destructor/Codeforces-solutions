#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    long long n;
    while (t--) {
        cin >> n;
        string thisNumber = to_string(n);
        vector<string> digits;
        int temp = thisNumber.size()-1;
        for (int i = 0; i < thisNumber.size(); i++) {
            if (thisNumber[i] != '0') {
                digits.push_back(string(1, thisNumber[i]));
                for (int j = 0; j <temp; j++) {
                    digits.back() += '0';
                }
                temp--;
            } else {
                temp--;
            }
        }
        cout << digits.size() << "\n";
        for (int i = 0; i < digits.size(); i++) {
            cout << stoi(digits[i]) << " ";
            if (i == digits.size()-1) {
                cout << "\n";
            }
        }
    }
    return 0;
}