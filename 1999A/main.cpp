#include <iostream>

using namespace std;

int main()
{
    int t, n, sum;
    string num1, num2;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        if (to_string(n).size() == 2) {
            num1 = to_string(n)[0];
            num2 = to_string(n)[1];
            sum = stoi(num1) + stoi(num2);
            cout << sum << endl;
        }
    }
    return 0;
}
