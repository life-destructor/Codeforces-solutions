#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    string firstOne, secondOne;
    cin >> firstOne;
    cin >> secondOne;
    transform(firstOne.begin(), firstOne.end(), firstOne.begin(), ::tolower);
    transform(secondOne.begin(), secondOne.end(), secondOne.begin(), ::tolower);
    int answer;
    for (int i = 0; i < firstOne.size(); i++) {
        if (firstOne[i] < secondOne[i]) {
            answer = -1;
            break;
        } else if (firstOne[i] > secondOne[i]) {
            answer = 1;
            break;
        } else {
            answer = 0;
        }
    }
    cout << answer;
    return 0;
}