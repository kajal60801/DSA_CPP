#include<bits/stdc++.h>
using namespace std;
int sum(int i,int n){
    if(i>n){
        return 0;
    }
    return i+sum(i+1,n);
    
}
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    int result=sum(1,n);
    cout<<"sum = "<<result;
}