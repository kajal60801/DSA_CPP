#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> L(n), R(n);

    cout << "Enter L array: ";
    for(int i = 0; i < n; i++) {
        cin >> L[i];
    }

    cout << "Enter R array: ";
    for(int i = 0; i < n; i++) {
        cin >> R[i];
    }

    int index = 0;
    int maxlen = 0;

    for(int i = 0; i < n; i++) {
        maxlen = max(maxlen, R[i]);
    }

    vector<int> vec(maxlen + 2, 0);

    for(int i = 0; i < n; i++) {
        vec[L[i]] += 1;
        vec[R[i] + 1] -= 1;
    }

    int m = vec[0];

    for(int i = 1; i <= maxlen; i++) {
        vec[i] = vec[i] + vec[i-1];

        if(m < vec[i]) {
            m = vec[i];
            index = i;
        }
    }

    cout << "Maximum occured integer = " << index;

    return 0;
}