#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main(){
    long long n,x,y,a,b,k;
    cin>>n;
    if(n>=0){
        cout<<n;
        return 0;
    }
    else{
        x=n%-10;
        y=n/10;

        a=y%-10;
        b=y/10;

        if(abs(x)>abs(a)){
            if(y==-0){
                cout<<"0";
            }
            else{
                cout<<y;
            }
            return 0;
        }
        else{
            k=b*10+x;
            if(k==-0){
                cout<<"0";
            }
            else{
                cout<<k;
            }
        }
    }
}