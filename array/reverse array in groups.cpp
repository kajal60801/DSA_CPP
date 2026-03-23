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

    for(int i = 0; i < n; i += k) {

        int end = min(i + k, n);

        reverse(arr.begin() + i, arr.begin() + end);
    }

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}