#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[i-1]){
            cout<<"false";

        }
        
   
}
 cout<<"true";
}