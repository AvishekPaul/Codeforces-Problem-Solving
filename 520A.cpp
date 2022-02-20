#include <bits/stdc++.h> 
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int count=1,i;

    for(i=0;i<n;i++){
        if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]+32;
        }
    }

    for(i=1;i<n;i++){
        int j=0;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                break;
            }
        }
        if(i==j){
            count++;
        }
    }

    if(count>=26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}