#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,t;
    int x,y,flag=0;
    cin>>n>>t;
    int a[n-1];
    for(int i=1;i<=n-1;i++){
        cin>>a[i];
    }
    
    for(int i=1;i<=n-1;i++){
        x=i+a[i];
        i=x-1;
        if(x==t){
            cout<<"YES";
            flag=1;
            break;
        }
        
    }

    if(flag==0){
        cout<<"NO";
    }
}
