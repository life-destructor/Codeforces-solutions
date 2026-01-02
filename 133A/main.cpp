#include <iostream>

using namespace std;

int main () {
    string thisString;
    cin >> thisString;
    int count = 0;
    for (int i = 0; i < thisString.size(); i++) {
        if (thisString[i] == 'H' || thisString[i] == 'Q' || thisString[i] == '9') {
            count++;
        }
    }
    if (count > 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}