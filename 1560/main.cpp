#include <iostream>

using namespace std;

int main () {
    int t, k;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k;
        int thisNum = 0;
        int count = 0;
        do {
            if (((thisNum+1) % 3 != 0) && ((thisNum+1) % 10 != 3)) {
                thisNum++;
                count++;
            } else {
                thisNum++;
            }
        } while (count < k);
        cout << thisNum << "\n";
    }
    return 0;
}