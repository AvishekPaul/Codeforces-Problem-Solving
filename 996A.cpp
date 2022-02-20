#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    int rem=n;

    while(1){
        
        if(rem/100>0){
            count+=rem/100;
            rem=rem%100;
        }
        else if(rem/20>0){
            count+=rem/20;
            rem=rem%20;
        }
        else if(rem/10>0){
            count+=rem/10;
            rem=rem%10;
        }
        else if(rem/5>0){
            count+=rem/5;
            rem=rem%5;
        }
        else if(rem/1>0){
            count+=rem/1;
            rem=rem%1;
        }

        if(rem==0){
            break;
        }
    }

    cout<<count;
}