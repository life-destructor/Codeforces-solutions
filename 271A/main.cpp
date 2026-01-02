#include <iostream> 

using namespace std;

int main () {
    int y;
    string thisNum;
    bool checkFlag = false;
    cin >> y;
    //2015
    do {
        y++;
        thisNum = to_string(y);
        if (thisNum[0] != thisNum[1] && thisNum[0] != thisNum[2] && thisNum[0] != thisNum[3] && thisNum[1] != thisNum[2] && thisNum[1] != thisNum[3] && thisNum[2] != thisNum[3]) {
            checkFlag = true;
        }
    } while (checkFlag != true);
    cout << y;
    return 0;
}