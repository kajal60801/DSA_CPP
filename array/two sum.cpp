#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        int need=k-arr[i];
        if(st.find(need)!=st.end()){
            cout<<"true ";
            cout<<"pair is "<<need<<" "<<arr[i]<<" ";
            return 0;
        }
        st.insert(arr[i]);
    }
    cout<<"false";
}