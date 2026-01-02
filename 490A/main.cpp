// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main () {
//     int n;
//     cin >> n;
//     int students[n];
//     int subjects[3];
//     string indexesForProgramming = "";
//     string indexesForMath = "";
//     string indexesForPE = "";
//     for (int i = 0; i < n; i++) {
//         cin >> students[i];
//         if (students[i] == 1) {
//             subjects[0]++;
//             indexesForProgramming += to_string(i+1);
//         } else if (students[i] == 2) {
//             subjects[1]++;
//             indexesForMath += to_string(i+1);
//         } else {
//             subjects[2]++;
//             indexesForPE += to_string(i+1);
//         }
//     }
//     // for (int i = 0; i < 3; i++) {
//     //     cout << subjects[i] << endl;
//     // }
//     sort(subjects, subjects+3);
//     int numberOfTeams = subjects[0];
//     cout << numberOfTeams << "\n";
//     if (numberOfTeams > 0) {
//         for (int i = 0; i < numberOfTeams; i++) {
//         cout << to_integer(indexesForProgramming[i]) << " " << to_integer(indexesForMath[i]) << " " << to_integer(indexesForPE[i]) << "\n";
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm> // For min()

using namespace std;

int main() {
    int n;
    cin >> n;

    // Use vectors to store the actual indices of students for each subject
    vector<int> programming;
    vector<int> math;
    vector<int> pe;

    for (int i = 0; i < n; i++) {
        int skill;
        cin >> skill;
        
        // Store the index (i + 1) in the corresponding vector
        if (skill == 1) {
            programming.push_back(i + 1);
        } else if (skill == 2) {
            math.push_back(i + 1);
        } else {
            pe.push_back(i + 1);
        }
    }

    // The number of teams we can make is the size of the smallest group
    // We use an initializer list {} inside min to compare 3 values at once
    int numberOfTeams = min({programming.size(), math.size(), pe.size()});

    cout << numberOfTeams << endl;

    for (int i = 0; i < numberOfTeams; i++) {
        // Print the i-th student from each category
        cout << programming[i] << " " << math[i] << " " << pe[i] << endl;
    }

    return 0;
}