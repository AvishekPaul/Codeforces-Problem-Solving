#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int x[n];
    int width=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    for(int i=0;i<n;i++){
        if(x[i]>h){
            width+=2;
        }
        else{
            width+=1;
        }
    }
    cout<<width;
}
