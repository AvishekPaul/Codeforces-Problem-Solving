#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int n,countH=0,countC=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            countH=countH+a[i];
        }
        else if((a[i]<0)&&(countH==0)){
            countC++;
        }
        else if(a[i]<0 && countH!=0){
            countH--;
        }
    }

    cout<<countC;
}