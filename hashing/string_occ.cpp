#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    string s;
    cin>>s;
    cin>>q;
    int hash[100]={0};
    for(int i=0;i<s.size(); i++){
        hash[s[i]-'a']++;
    }

    while(q--){
        char c;
        cin>>c;
        cout<<"occurance is";
        cout<<hash[c-'a'];


    }
}