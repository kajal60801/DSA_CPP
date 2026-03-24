#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int A, B;
    cout << "Enter A and B: ";
    cin >> A >> B;

    unordered_set<int> st;

    for(int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }

    bool ok = true;

    for(int i = A; i <= B; i++) {
        if(st.find(i) == st.end()) {
            ok = false;
            break;
        }
    }

    if(ok)
        cout << "True";
    else
        cout << "False";

    return 0;
}