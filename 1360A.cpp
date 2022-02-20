#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,a,b,c;
    cin>>t;

    while(t--){
    cin>>a>>b;
    if(a==b){
        c=a+b;
        cout<<c*c<<endl;
    }
    else if(a<b){
        c=a*2;
        if(c>b){
            cout<<c*c<<endl;
        }
        else{
            cout<<b*b<<endl;
        }
    }
    else{
        c=b*2;
        if(c>a){
            cout<<c*c<<endl;
        }
        else{
            cout<<a*a<<endl;
        }
    }
    }
}