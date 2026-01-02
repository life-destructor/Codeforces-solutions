#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    vector<int> newArray(n);
    int j = 1;
    for (int i = 0; i < n/2; i++) {
        newArray[i] = j;
        j+=2;
    }
    int l = 2;
    if (n % 2 == 0) {
    for (int i = (n/2); i < n; i++) {
        newArray[i] = l;
        l+= 2;
    }
} else {
    for (int i = (n/2) + 1; i < n; i++) {
        newArray[i] = l;
        l+= 2;
    }
}
    // for (int i = 0; i < n; i++) {
    //     cout << newArray[i] << " ";
    // }
    // cout << "\n";
    cout << newArray[k-1];
    // 1, 3, 5, 7, 2, 4, 6, 8
    return 0;
}