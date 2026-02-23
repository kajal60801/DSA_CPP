#include<bits/stdc++.h>
using namespace std;
void series(int i,int n){
    if(i>n){
        return;
    }
    cout<<n+1-i<< " ";

    series(i+1,n);
    
}
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    series(1,n);
}