#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    string t;
    cin >> t;
    int count = 0;
    int i;
    for (i = 1; i < n; i++) {
        count += i;
        if (count == n) {
            break;
        }
    }
    int numberOfLetters = i; // lets say 10 ooopppsss has oops which is 4 letters.
    string s = "";
    int temp = 0;
    for (int j = 0; j < t.size(); j++) {
        s += t[j];
        // so basically t has 0 to 9, we picked up 0, which is 1. 
        //Now we need to pick up 2, so we increment j by temp which is one. // now 0,1,2,3,4,5,6,7,8,9
        //
        temp++; // 2
        j += temp; // 2
    }
    cout << s << endl;
    // so i is the number of letters in the original string s; we need to go through the string t
    // and and extract one letter)
    return 0;
}