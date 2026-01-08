#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> distances(n+1);
    //total distances are n+1;
    distances.push_back(a[0]);
    distances.push_back((x-a[n-1])*2);
    for (int i = 0; i < n-1; i++) {
        distances.push_back(a[i+1] - a[i]);
    }
    sort(distances.begin(), distances.end(), greater<int>());
    cout << distances[0] << "\n";
}
return 0;
}