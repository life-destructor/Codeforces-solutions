#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    vector<int> theseNumbers(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> theseNumbers[i];
        total += theseNumbers[i];
    }
    int requiredMoney = (total / 2) + 1;
    // cout << "Test, required money is " << requiredMoney << "\n";
    sort (theseNumbers.begin(), theseNumbers.end());
    int count = 0;
    int collectingMoney = 0;
    for (int i = n-1; i >=0; i--) {
        collectingMoney += theseNumbers[i];
        count++;
        // cout << collectingMoney << " is collected money so far\n";
        if (collectingMoney >= requiredMoney) {
            break;
        }
    }
    cout << count << "\n";
    return 0;
}