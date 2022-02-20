#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n;
        m=n/2;
        if(m%2!=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=2;i<=n;i=i+2){
                cout<<i<<" ";
            }
            for(int j=1;j<=n+1;j=j+2){
                if(j!=m+1){
                    cout<<j<<" ";
                }
            }
            cout<<endl;
        }
    }
}