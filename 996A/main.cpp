#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int count = n/100;
    if (n % 100 != 0) {
        count += (n % 100) / 20;
    }
    if ((n % 100) % 20 != 0) {
        count += ((n % 100) % 20) / 10;
    }
    if ((((n % 100) % 20) % 10) != 0) {
        count += (((n % 100) % 20) % 10) / 5;
    }
    if (((((n % 100) % 20) % 10) % 5) != 0) {
        count += ((((n % 100) % 20) % 10) % 5) / 1;
    }
    cout << count;
    return 0;
}