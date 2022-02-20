#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int z=0,y=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            z++;
        }
        else if(s[i]=='D'){
            y++;
        }

       
    }

    if(z>y){
        cout<<"Anton";
    }
    else if(y>z){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}