#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n; //length of string;
        cin >> n;
        string s;
        cin >> s;
        char largest = s[0];
        int count = 0;
        // alright, wtf do i have to do?
        //loop through the string to find the farthest letter.
        //after that is found, we need to find what position the letter is in. That's the ans.
        for (int j = 0; j < n; j++) {
            if (s[j] > largest) {
                largest = s[j]; // so now this largest contains a letter. We need to find what position this letter has.
            }
        }
        for (char letter = 'a'; letter <= 'z'; letter++) {
            count++;
            if (letter == largest) {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}