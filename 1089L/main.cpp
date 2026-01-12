#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    vector<int> jobs(n), time(n);
    vector<int> fkingIdlers, thisIndex;

    for (int i = 0; i < n; i++) {
        cin >> jobs[i];
        if (find(jobs.begin(), jobs.begin() + i, jobs[i]) != jobs.begin() + i) {
            // this means this value has already been entered

            thisIndex.push_back(i);
            // now with this, I know the times of all duplicates.
        }
    }
    int temporary = 0;
    for (int i = 0; i < n; i++) {
        cin >> time[i];
        if (i == thisIndex[temporary]){
            fkingIdlers.push_back(time[i]);
            temporary++;
        }
    }
    int counter = 0;
    vector<int> numberOfPeople;
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < n; j++) {
            if (jobs[j] == i) {
                counter++;
            }
        }
        numberOfPeople.push_back(counter);
        // this array contains the number of people in each job.
        counter = 0;
    }
    int temp = 1;
    int numberOfJobsWithZeroIdlers = count(numberOfPeople.begin(),numberOfPeople.end(), 0);
    sort(fkingIdlers.begin(), fkingIdlers.end());
    int total = 0;
    for (int i = 0; i < numberOfJobsWithZeroIdlers; i++) {
        total += fkingIdlers[i];
    }
    cout << total;

    return 0;
}