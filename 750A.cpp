#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main(){
    int n,k,sum=0;
    cin>>n>>k;
    int i=1;

    int a=240-k;
    if(a<5){
        cout<<"0";
        return 0;
    }

    while(sum<=a){
        int b=5*i;
        sum+=b;
        if(i==n || sum>=a){
            break;
        }
        i=i+1;
        
        
    }

    if(sum>a){
        cout<<i-1;
    }
    else{
        cout<<i;
    }



}
