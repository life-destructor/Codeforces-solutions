#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    // n is the number of friends 5
    // k is the number of bottles 100
    // l is the number of millileters of drink in the bottle 10
    // c is the number of limes 1
    // d is the number of slices each lime is cut into 19
    // p is the grams of salt 90
    // nl is 4
    // np 3
    //provided they all drink the same amount. How many toasts can each friend make?
    // 1 toast is equal to every friend having nl milileters of the drink, 1 slice of the lime, and np grams of salt.
    int totalAmountDrink = k * l; // 1000
    int totalAmountLime = c * d; // 19  and salt is 90
    // each friend is to get 4 of the drink, 1 slice, and 3 of the salt.

    int oneShotDrink = n * nl;
    int oneShotSalt = np * n;
    // slices is just number of people which is n;

    int NoOfShotsDrink = totalAmountDrink/oneShotDrink;
    int NoOfShotsSalt = p / oneShotSalt;
    int NoOfShotsLimes = totalAmountLime / n; 

    int answer[3];
    answer[0] = NoOfShotsDrink;
    answer[1] = NoOfShotsSalt;
    answer[2] = NoOfShotsLimes;
    sort(answer, answer+3);

    cout << answer[0];
}