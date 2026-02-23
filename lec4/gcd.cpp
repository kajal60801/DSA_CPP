#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
   
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin >>b;
    while(a>0&&b>0){
        if(a>b){
           a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        cout<<b;
    }
    else{
        cout<<a;
    }
}