#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter k: ";
    cin >> k;

    long long sum = 0;
    int maxLen = 0;

    unordered_map<int,int> mp;
    mp[0] = -1;

    for(int i = 0; i < n; i++) {
        sum += arr[i];

        int r = (sum % k + k) % k;

        if(mp.find(r) != mp.end()) {
            maxLen = max(maxLen, i - mp[r]);
        }
        else {
            mp[r] = i;
        }
    }

    cout << "Longest subarray length divisible by k = " << maxLen;

    return 0;
}