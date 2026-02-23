 #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector <int> ls;
    
   
    cout<<"enter the number which want to prime: ";
    cin>>n;
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
            count++;
            if(n/i!=i){
                ls.push_back(n/i);
                count++;

            }

        }
        
    }
    sort(ls.begin() ,ls.end());
    for(auto i:ls){
        cout<<i<<" ";
       
        
    }
     if(count==2){
        cout<<"it is prime";}
}
