#include <iostream>

using namespace std;

int main () {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int countOnes = 0;
        int countTwos = 0;
        bool condition;
        int sum1 = 0;
        int sum = 0;
        int operations = 0;
        int a[n]; // array a is good if the sum of all elements is >= 0;
                 // it is good if product of all is 1;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            if (a[j] == 1) {
                countOnes++;
            } else {
                countTwos++;
            }
            sum += a[j];
        }
            if (sum < 0) {
                do {
                    operations++;
                    sum += 2;
                    countTwos--;
                } while (sum < 0);
            }
            if (countTwos % 2 != 0) {
                operations++;
            }
            cout << operations << endl;
        }
    return 0;
}