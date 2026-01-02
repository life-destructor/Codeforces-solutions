#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    int answer;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        int count = 0;
        do {
            if (n%6 == 0) {
                n /= 6;
                count++;
            } else if (n == 1) {
                count = 0;
                break;
            } else {
                n *= 2;
                count++;
            }
        } while (n > 2);
        if (n==1) {
            cout << count << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
