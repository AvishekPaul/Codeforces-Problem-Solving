#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int t,n,sum,x;
    cin>>t;
    while(t--){
        cin>>n;
        sum=1;
        for(int i=2;i<n;i=i*2){
            sum+=i;
            if(n%sum==0){
                x=n/sum;
                break;
            }
        }
        cout<<x<<endl;
        
    }
}