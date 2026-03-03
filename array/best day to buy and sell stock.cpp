#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int cost=0;
        int minimum=prices[0];
        int maximum=0;
        for(int i=0;i<n;i++){
            cost=prices[i]-minimum;
            maximum=max(cost,maximum);
            minimum=min(minimum,prices[i]);
            
        }
        cout<< maximum;
        
}