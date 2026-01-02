#include <iostream>

using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int smallestNumber = 9;
        cin >> x;
        string strNumber = to_string(x);
        for (int j = 0; j < strNumber.size(); j++) {
            if (int (strNumber[j]) - '0' < smallestNumber) {
                smallestNumber = int (strNumber[j]) - '0';
            }
        }
        cout << smallestNumber << endl;
    }
    return 0;
}
