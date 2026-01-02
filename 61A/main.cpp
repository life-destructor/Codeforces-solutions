#include <iostream>

using namespace std;

int main () {
    string firstNumber, secondNumber;
    cin >> firstNumber;
    cin >> secondNumber;
    // string first = to_string(firstNumber);
    // string second = to_string(secondNumber);
    string answer = "";
    for (int i = 0; i < firstNumber.size(); i++) {
        if (firstNumber[i] != secondNumber[i]) {
            answer += '1';
        } else {
            answer += '0';
        }
    }
    cout << answer << endl;
    return 0;
}