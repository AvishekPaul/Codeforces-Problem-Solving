#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    int a[4];
    int i,j,count=1;
    
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    
    for(i=1;i<4;i++){
        j=0;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                break;
            }
        }
        if(i==j){
            count++;
        }
    }
    if(count<4){
        int c=4-count;
        cout<<c;
    }
    else{
        cout<<"0";
    }
}