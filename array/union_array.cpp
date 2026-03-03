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
    vector<int> result;
        while(i<n&&j<m){
            if(a[i]<b[j]){
                if(result.empty() || result.back() != a[i])
                    result.push_back(a[i]);
                i++;
            }
            else if(b[j]<a[i]){
                if(result.empty() || result.back() != b[j])
                    result.push_back(b[j]);
                j++;
            }
            else{
                if(result.empty() || result.back() != a[i])
                    result.push_back(a[i]);
                i++;
                j++;
            }
        }
        while(i<n){
            if(result.empty() || result.back() != a[i])
                    result.push_back(a[i]);
                    i++;
        }
        while(j<m){
            if(result.empty() || result.back() != b[j])
                result.push_back(b[j]);
                j++;
        }
        cout<< result[i]<<" ";
}