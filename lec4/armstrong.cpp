 #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int rev=0;
   
    cout<<"enter the number which want to reverse: ";
    cin>>n;
     int arm=n;
   while(n>0){
        int m=n%10;
        rev=rev+m*m*m;
        n=n/10;
    }
    if(arm==rev){
        cout<<"it is armstrong";
    }
    else{
        cout<<"not";
    }
    

}