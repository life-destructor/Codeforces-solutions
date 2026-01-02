#include <iostream>

using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> a >> b >> c;
        int numArray[3];
        numArray [0] = a;
        numArray[1] = b;
        numArray [2] = c;
        for (int k = 0; k < 3; k++) {
        for (int j = 1; j < 3; j++) {
            if (numArray[j-1] > numArray[j]) {
                int temp = numArray[j-1];
                numArray[j-1] = numArray[j];
                numArray[j] = temp;
            }
        }
        }
        cout << numArray[1] << endl;
    }
    return 0;
}
