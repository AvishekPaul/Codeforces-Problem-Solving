#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int z=0,y=0;
    int x=s.size();
    for(int i=0;i<x;i++){
        if(s[i]>='A' && s[i]<='Z'){
            z++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            y++;
        }

       
    }
    for(int i=0;i<x;i++){
        if(z>y){
            if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }

        }
        else{
            if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
        }
    }

    cout<<s;

}