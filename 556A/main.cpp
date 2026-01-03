#include <bits/stdc++.h>

using namespace std;

int main () {
    // int n; cin >> n;
    // string thisString; cin >> thisString;
    // vector<int> indexes;
    // for (int i = 1; i <= n; i++) { // 1100
    //     if ((thisString[i] == '1' && thisString[i-1] == '0') || (thisString[i] == '0' && thisString[i-1] == '1')) {
    //         // indexes.push_back(i);
    //         // indexes.push_back(i+1);
    //         // i++;
    //         thisString.erase(i-1, 2);
    //         // cout << thisString << " is string rn\n";
    //         i = 0;
    //         n -= 2;
    //     }
    // }
    // // sort(indexes.begin(), indexes.end());
    // // indexes.erase(unique(indexes.begin(), indexes.end()), indexes.end());
    // // for (int i = 0; i < indexes.size(); i++) {
    // //     if (i == indexes[i]) {
    // //         thisString.erase(i,1);
    // //     }
    // // }
    // cout << thisString.size();


    // this simple yet brilliant solution was given by ChatGPT
    // it just saddens me that I know the concept of stacks, but did not think of applying it here

    int n; 
    cin >> n;
    string s; 
    cin >> s;
    
    // We will use this string as our "stack"
    string st; 
    
    for (int i = 0; i < n; i++) {
        // If stack is empty, we just push the current character
        if (st.empty()) {
            st.push_back(s[i]);
        } 
        else {
            // Check the top of the stack (st.back()) against current char (s[i])
            if (st.back() != s[i]) {
                // '0' and '1' found -> They annihilate each other
                st.pop_back(); 
            } else {
                // They are the same ('0' and '0' or '1' and '1') -> Push to stack
                st.push_back(s[i]);
            }
        }
    }
    
    cout << st.size() << endl;
    return 0;


    return 0;
}