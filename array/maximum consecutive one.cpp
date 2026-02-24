#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int count=0;
    int maxcount=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]==1){
            count++;
            maxcount=max(count,maxcount);
        }
        else{
            count=0;
        }
    }
    cout<<maxcount;
}
