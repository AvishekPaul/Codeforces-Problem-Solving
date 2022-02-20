#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,n,k,count;
    cin>>t;
    while(t--){
    cin>>n>>k;
    int a[n],b[n];
    count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    if(k==0){
        for(int i=0;i<n;i++){
            count+=a[i];
        }
    }
    else{
        sort(a,a+n);
        sort(b,b+n);
        if(a[0]>=b[n-1]){
            for(int i=0;i<n;i++){
            count+=a[i];
        }
        }
        else{
            for(int i=0,j=n-1;i<k;i++,j--){
                    if(b[j]>a[i]){
                        a[i]=b[j];
                }
            }
            for(int i=0;i<n;i++){
            count+=a[i];
        }
        }
    }

    cout<<count<<endl;
    }
}