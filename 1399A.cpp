#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,flag=0;
    
    

    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<"YES\n";
        }

       else{
           sort(a,a+n);
           for(int i=0;i<n-1;i++){
               if(abs(a[i]-a[i+1])<=1){
                   flag++;
               }
               else{
                   flag=0;
                   break;
               }
           }
            if(flag==0){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
       }
    }
}