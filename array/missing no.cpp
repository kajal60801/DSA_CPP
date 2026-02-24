#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n-1);
    for(int i=0;i<n-1;i++){
        cin>>v[i];
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    int totalsum=(n*(n+1))/2;
    int missing=totalsum-sum;
    cout<<missing;

}