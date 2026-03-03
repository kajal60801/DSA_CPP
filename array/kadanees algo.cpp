// aisa konsa sub arrayu h jo maximum sum deta h 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ansstrt=0;
    int ansend=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long maximum=LONG_MIN;
    long long sum=0;
    int start=0;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
        if(sum>maximum){
            maximum=sum;
            ansstrt=start;
            ansend=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maximum<<" ";
    for(int i=ansstrt;i<ansend;i++){
        cout<<arr[i]<<" ";
    }

}