#include <iostream>

using namespace std;

int main () {
    int n, p, q; //n is the number of rooms, p is the number of people living in the room, q is the capacity in the room
    int count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p >> q;
        if ((q - p) >= 2) {
            count++;
        }
    }
    cout << count;
    return 0;
}