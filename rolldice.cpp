#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m;
    if(n>m){
        a=n;
        b=m;
    }
    else{
        a=m;
        b=n;
    }

    if(n==m){
        cout<<n+1;
    }
    else{
        for(int i=b+1;i<=a+1;i++){
            cout<<i<<endl;
        }
    }
}