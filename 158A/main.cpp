#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int scores[50];
    int advancingCount = 0;

    // Read n and k
    cin >> n >> k;

    // Read all n scores into the array
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    // Determine the k-th place score.
    // The problem states the scores are non-increasing, so we can
    // directly access the k-th score at index k-1.
    int k_th_score = scores[k - 1];

    // Iterate through the scores to count advancing participants
    for (int i = 0; i < n; i++) {
        // Check if the current score meets the two criteria:
        // 1. It's greater than or equal to the k-th score.
        // 2. It's a positive score.
        if (scores[i] >= k_th_score && scores[i] > 0) {
            advancingCount++;
        }
    }

    // Output the final count
    cout << advancingCount;

    return 0;
}
