#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    int count [t];
    for (int i = 1; i <= t; i++) {
        count [i] = 0;
        cin >> n;
        // basically a + b = n, where a and b are positive integers. So basically I loop twice, inner and outer, for i and j equal to 1 to n-1.
        for (int a = 1; a < n; a++) {
            for (int b = 1; b < n; b++) {
                if (a+b == n) {
                    count[i]++;
                }
            }
        }
    }
    for (int i = 1; i <= t; i++) {
        cout << count[i] << endl;
    }
    return 0;
}
