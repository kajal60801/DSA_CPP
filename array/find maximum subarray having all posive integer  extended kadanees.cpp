#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    long long sum = 0;
    long long maximum = -1;
    
    int start = 0;
    int ansstart = -1, ansend = -1;

    for(int i = 0; i < n; i++) {
        
        if(arr[i] >= 0) {
            sum += arr[i];
            
            if(sum > maximum || 
               (sum == maximum && (i - start) > (ansend - ansstart))) {
                
                maximum = sum;
                ansstart = start;
                ansend = i;
            }
        }
        else {
            sum = 0;
            start = i + 1;
        }
    }

    vector<int> result;
    
    if(ansstart == -1) {
        cout << -1;
        return 0; 
    }

    for(int i = ansstart; i <= ansend; i++) {
        cout << arr[i] << " ";
    }

    
}
   