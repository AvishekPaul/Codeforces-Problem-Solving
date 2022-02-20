#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n];
    int i,j,count=0;

    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int largest=x[0],smallest=x[0];

    for(i=1;i<n;i++){
        
        for(j=i-1;j<i;j++){
            if(x[i]>largest){
                largest=x[i];
                count++;
            }
            else if(x[i]<smallest){
                smallest=x[i];
                count++;
            }

            
        }
    }

    cout<<count;
}