#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
    
    
    

}
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    int result=fact(n);
    cout<<"factorial = "<<result;
}