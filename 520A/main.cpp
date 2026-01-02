#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    string thisString;
    if (n < 26) {
        cout << "NO\n";
    } else {
        cin >> thisString;
    int letters[26];
    for (int i = 0; i < 26; i++) {
        letters[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        switch (tolower(thisString[i])) {
            case 'a':
            letters[0]++;
            break;
            case 'b':
            letters[1]++;
            break;
            case 'c':
            letters[2]++;
            break;
            case 'd':
            letters[3]++;
            break;
            case 'e':
            letters[4]++;
            break;
            case 'f':
            letters[5]++;
            break;
            case 'g':
            letters[6]++;
            break;
            case 'h':
            letters[7]++;
            break;
            case 'i':
            letters[8]++;
            break;
            case 'j':
            letters[9]++;
            break;
            case 'k':
            letters[10]++;
            break;
            case 'l':
            letters[11]++;
            break;
            case 'm':
            letters[12]++;
            break;
            case 'n':
            letters[13]++;
            break;
            case 'o':
            letters[14]++;
            break;
            case 'p':
            letters[15]++;
            break;
            case 'q':
            letters[16]++;
            break;
            case 'r':
            letters[17]++;
            break;
            case 's':
            letters[18]++;
            break;
            case 't':
            letters[19]++;
            break;
            case 'u':
            letters[20]++;
            break;
            case 'v':
            letters[21]++;
            break;
            case 'w':
            letters[22]++;
            break;
            case 'x':
            letters[23]++;
            break;
            case 'y':
            letters[24]++;
            break;
            case 'z':
            letters[25]++;
            break;
        }
    }
    bool checkFlag = true;
    for (int i = 0; i < 26; i++) {
        if (letters[i] < 1) {
            checkFlag = false;
            break;
        }
    }
    if (checkFlag == true) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    // for (int i = 0; i < 26; i++) {
    //     cout << letters[i] << "\n";
    // }
    }
    return 0;
}