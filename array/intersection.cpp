#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector <int> b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int i=0,j=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        
       else{
    cout << a[i] << " ";
    int val = a[i];
    while(i < n && a[i] == val) i++;
    while(j < m && b[j] == val) j++;
}
    }
}