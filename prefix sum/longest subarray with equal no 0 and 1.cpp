#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements (0/1): ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int maxlen = -1;

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++) {

        if(arr[i] == 0)
            sum--;
        else
            sum++;

        if(sum == 0) {
            maxlen = i + 1;
        }
        else if(mp.find(sum) != mp.end()) {
            maxlen = max(maxlen, i - mp[sum]);
        }
        else {
            mp[sum] = i;
        }
    }

    if(maxlen < 0)
        maxlen = 0;

    cout << "Max length = " << maxlen;

    return 0;
}