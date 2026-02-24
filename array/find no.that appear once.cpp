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
    bool found=false;
    for(auto it:mp){
        if(it.second==1){
            cout<<it.first;
            found=true;
        }
        
    }
    if(!found){
        cout<<"-1";
    }
}