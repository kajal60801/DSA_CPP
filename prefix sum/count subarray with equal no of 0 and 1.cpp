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

    int count = 0;
    int sum = 0;

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++) {

        if(arr[i] == 0)
            sum--;
        else
            sum++;

        if(sum == 0)
            count++;

        if(mp.find(sum) != mp.end()) {
            count += mp[sum];
        }

        mp[sum]++;
    }

    cout << "Count of subarrays = " << count;

    return 0;
}