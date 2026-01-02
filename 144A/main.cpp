#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // so basically first soldier has to have the maxHeight and the last soldier has to have minHeight.
    int maxValue = a[0]; 
    int maxIndex = 0; 
    int minIndex = n-1;
    int minValue = a[n-1];
    for (int i = 0; i < n; i++) {
        if (a[i] > maxValue) {
            maxValue = a[i];
            //cout << "Value of minValue rn is " << minValue << endl;
            maxIndex = i;
            //cout << "Value of index of minValue rn is " << minIndex << endl;
        }
    }
    //cout << "max Value is " << maxValue << " and index is " << maxIndex << endl;
    for (int i = n-1; i >= 0; i--) {
        if (a[i] < minValue) {
            minValue = a[i];
            minIndex = i;
        }
    }
    //cout << "min value is " << minValue << " and index is " << minIndex << endl;
    int stepsForMax;
    if (maxIndex > minIndex) {
        stepsForMax = maxIndex - 1;
    } else {
        stepsForMax = maxIndex;
    }
    cout << ((n-1) - minIndex) + (stepsForMax);
    // so basically if the array has 10, 99, 100,31,63,40,76, 10
    //so 10 is min and 1 is the index, so distance is basically (8-1) - position of index.
    //100 is max and 3 is index,for that, just basically one less than index
    //need to find steps
    return 0;
}