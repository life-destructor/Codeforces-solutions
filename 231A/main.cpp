#include <iostream>

using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    int Petya, Vastya, Tonya;
    for (int i = 1; i <= n; i++) {
        cin >> Petya >> Vastya >> Tonya;
        if (Petya + Vastya + Tonya >= 2) {
            count++;
        }
    }
    cout << count;
    return 0;
}
