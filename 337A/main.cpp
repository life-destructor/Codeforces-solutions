#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int f[m];
    for (int i = 0; i < m; i++) {
        cin >> f[i];
    }
    sort (f, f+m);
    cout << f[n-1] - f[0];
    return 0;
}
