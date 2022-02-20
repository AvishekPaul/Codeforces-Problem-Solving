#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0,i,count=0,bsum=0;
    

    for(i=1;i<=n;i++){
        sum+=i;
        bsum+=sum;
        count++;
        if(bsum==n){
            break;
        }
        else if(bsum>n){
            count--;
            break;
        }
        
    }
    cout<<count;
}