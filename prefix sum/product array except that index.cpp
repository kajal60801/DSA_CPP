#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int countzero = 0;
    long long product = 1;   // better to use long long
    int idx = -1;

    vector<int> res(n, 0);

    // Step 1: count zeros and product
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            countzero++;
            idx = i;
        }
        else{
            product *= arr[i];
        }
    }

    // Step 2: fill result
    if(countzero == 0){
        for(int i = 0; i < n; i++){
            res[i] = product / arr[i];
        }
    }
    else if(countzero == 1){
        res[idx] = product;
    }
    // if countzero > 1 → already all 0

    // Output
    cout << "Result: ";
    for(int i = 0; i < n; i++){
        cout << res[i] << " ";
    }

    return 0;
}