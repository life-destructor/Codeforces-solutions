#include <iostream>

using namespace std;

int main () {
    int k, n, w; // k i s cost of first banana, n is the money he has, w is number of bananas 
                // wants to buy w bananas, has to pay k dollars for first banana, then 2k ..., has n dollars.
                // need to find how much how much dollars he needs to borrow. So basically, 
                // 3 + 6 + 9
    cin >> k >> n >> w;
    int costBananas = 0;
    for (int i = 1; i <= w; i++) {
        costBananas += i*k;
    }
    if (n < costBananas) {
    cout << costBananas - n;
    } else {
        cout << 0;
    }
    
    return 0;
}