#include<bits/stdc++.h>
using namespace std;
bool rev(int i,string &s){
    if(i>=s.length()/2){
        return true;
    }
    if(s[i]!=s[s.length()-i-1]){
        return false;

    }
   
    return rev(i+1,s);
    
}
int main(){
    cout<<"enter the string:  ";
    string s;
    cin>>s;
    
    bool result= rev(0,s);
    if(result==1){
        cout<<"palindrome";

    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}