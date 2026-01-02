#include <iostream>

using namespace std;

bool isPrime (int n) {
    int count = 0;
    if (n <= 1) {
        return false;
    }
    for (int i = 1; i <=n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    if (count > 2) {
        return false;
    } else {
        return true;
    }
}

int main () {
    int n, m;
    int count = 0;
    cin >> n >> m;
    for (int i = n+1; i <=m; i++) {
        if (isPrime(i) == true) {
            count++;
        }

    }
    if (isPrime(m) != true) {
        cout << "NO";
    } else if (m % 2 == 0) {
        cout << "NO";
    } else if (count > 1) {
        cout << "NO";
    } else if (count == 0){
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}