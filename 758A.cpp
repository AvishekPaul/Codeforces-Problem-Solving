#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=0;i<n-1;i++){
        count+=abs(a[n-1]-a[i]);
    }

    cout<<count;
}