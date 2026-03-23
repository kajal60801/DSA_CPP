#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int piv = -1;

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] < arr[i + 1]) {
            piv = i;
            break;
        }
    }

    if(piv == -1) {
        reverse(arr.begin(), arr.end());
    }
    else {

        for(int i = n - 1; i >= 0; i--) {
            if(arr[i] > arr[piv]) {
                swap(arr[i], arr[piv]);
                break;
            }
        }

        reverse(arr.begin() + piv + 1, arr.end());
    }

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}