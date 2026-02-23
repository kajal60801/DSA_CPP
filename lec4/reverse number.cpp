#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int rev=0;
    cout<<"enter the number which want to reverse";
    cin>>n;
   while(n>0){
        int m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    cout<<rev;

}