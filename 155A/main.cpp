#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int points[n];
    int count = 0;
    int lowestScore, highestScore;
    for (int i = 0; i < n; i++) {
        cin >> points[i];
        if (i == 0) {
            lowestScore = points[i];
            // cout << "initial score is " << lowestScore << "\n";
            highestScore = points[i];
        } else {
            if (points[i] > highestScore) {
                count++;
                highestScore = points[i];
                // cout << "highest score now is " << highestScore << "\n";
            } else if (points[i] < lowestScore) {
                count++;
                lowestScore = points[i];
                // cout << "lowest score is " << lowestScore << "\n";
            }
        }
    }
    cout << count;

    return 0;
}