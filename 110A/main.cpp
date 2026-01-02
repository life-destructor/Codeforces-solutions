#include <iostream>

using namespace std;

int main () {
    long long n;
    cin >> n;
    int count = 0;
    string thisNum = to_string (n);
    for (int i = 0; i <thisNum.size(); i++) {
        if (thisNum[i] == '4' || thisNum[i] == '7') {
            count++;
        }
    }
    if (count == 4 || count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}