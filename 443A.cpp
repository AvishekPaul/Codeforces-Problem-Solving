#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int count=0,j;
    int x=s.size();
    for(int i=1;i<=x-1;i++){
        if(s[i]>='a' && s[i]<='z'){
            j=0;
            for(j=0;j<i;j++){
                if(s[i]==s[j]){
                    break;
                }
            }
            if(i==j){
                count++;

        }
        
                
    }
    }
     
     cout<<count;
}