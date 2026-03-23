#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a1(n), a2(n);

    for(int i = 0; i < n; i++) {
        cin >> a1[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> a2[i];
    }

    int sum1 = 0;
    int sum2 = 0;
    int maxlen = 0;

    unordered_map<int,int> mp;

    int diff = 0;

    for(int i = 0; i < n; i++) {

        sum1 += a1[i];
        sum2 += a2[i];

        diff = sum1 - sum2;

        if(diff == 0) {
            maxlen = max(maxlen, i + 1);
        }

        else if(mp.find(diff) != mp.end()) {
            maxlen = max(maxlen, i - mp[diff]);
        }

        else {
            mp[diff] = i;
        }
    }

    cout << maxlen;

    return 0;
}