#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long long t,a,b,n,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        if(n%3==0){
            cout<<a<<endl;
        }
        else if(n%3==1){
            cout<<b<<endl;
        }
        else if(n%3==2){
            d=a^b;
            cout<<d<<endl;
        }
    }
}