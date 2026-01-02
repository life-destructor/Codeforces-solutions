#include <iostream> 
#include <algorithm>

using namespace std;

int main () {
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i ++) {
        cin >> n;
        int a[n];
        int countOne = 0; int countTwo = 0;
        int total = 0;
        int Alice = 0;
        int m = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            total += a[j];
            if (a[j] == 1) {
                countOne++;
            } else {
                countTwo++;
            }
        }
        sort (a, a+n);
        if (total % 2 != 0) {
            cout << "NO\n";
        } else {
            do {
                Alice += a[m];
                m++;
            } while (Alice >= total/2 || m == n -1);
            if (Alice == total/2) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
        // ok, so now we need to find if we can divide the numbers equally.
        // Let's say we have 5 candies, they weigh: 2,1,1,1,1
        // in this example, we have 4 ones, and 1 twos, which totals 6.
        // each one has to have 3. So 2 + 8 = 13. 
        // so logic is that if we can have yes if the total is even, and if the number of ones and twos is even.
        // which means i need to find 
    }
    return 0;
}