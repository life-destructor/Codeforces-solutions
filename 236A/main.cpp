#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    string femaleName;
    cin >> femaleName;
    int charCount;
    set<char> sortedName (femaleName.begin(), femaleName.end());
    charCount = sortedName.size();
    if (charCount % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
