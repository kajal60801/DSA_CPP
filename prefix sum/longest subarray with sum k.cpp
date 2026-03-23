#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int prefix = 0;
    int maxlen = 0;

    unordered_map<int,int> mp;

    mp[0] = -1;

    for(int i = 0; i < n; i++) {

        prefix += arr[i];

        if(mp.find(prefix - k) != mp.end()) {
            maxlen = max(maxlen, i - mp[prefix - k]);
        }

        if(mp.find(prefix) == mp.end()) {
            mp[prefix] = i;
        }
    }

    cout << maxlen;

    return 0;
}