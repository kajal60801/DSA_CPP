// majority element means that appear more than n/2 times
#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(auto it:mp){
        if(it.second>=n/2){
            cout<<it.first;
        }
    }
}