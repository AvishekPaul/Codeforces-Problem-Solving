#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,n,count;
    cin>>t;
    while(t--){
        cin>>n;
        count=0;
        int a[n],b[n];
        for(int i=0;i<=n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b, b + n);

        for(int i=0;i<n;i++){
            cout<<b[i];
            
        }
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                count++;
                
            }
        }
        cout<<"count "<<count<<endl;
        if(count==n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}