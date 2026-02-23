#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[x]){
            x=x+1;
            arr[x]=arr[i];
        }
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<x;
   
}