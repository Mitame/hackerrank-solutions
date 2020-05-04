include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the absolutePermutation function below.
vector<int> absolutePermutation(int n, int k) {
    vector<int> ans;
    if (k!=0 && n%k != 0) {
        ans = {-1};
    } else {
        for (int i=1; i<n; i++) {
            if (k==0 || ((i-1)/k) % 2 == 0){
                if (i+k <=n) {
                    ans.push_back(i+k);
                }
            } else {
                if (i-k <=n) {
                    ans.push_back(i-k);
                }
            }
        }
        ans.push_back(n-k);
        if ((int)ans.size() != n) ans = {-1};
    }
    return ans;
}
