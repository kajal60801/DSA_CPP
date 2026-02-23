#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int hash[10001]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<" times occured"<<endl;
    }
}


// class Solution {
// public:
//     vector<vector<int>> countFrequencies(vector<int>& nums) {
//         unordered_map<int,int> freq;

//         // count frequency
//         for (int i : nums) {
//             freq[i]++;
//         }

//         vector<vector<int>> result;

//         // store element and frequency
//         for (auto occ : freq) {
//             result.push_back({occ.first, occ.second});
//         }

//         return result;   
//     }
// };
