#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int left = 0;

    // total sum
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    for(int i = 0; i < n; i++) {

        if(left == sum - left - arr[i]) {
            cout << i;
            return 0;
        }

        left += arr[i];
    }

    cout << -1;

    return 0;
}