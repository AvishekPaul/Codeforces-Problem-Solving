#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    long long n,l,i,j;
    cin>>n>>l;
    long long a[n];
    int flag=0,gal=0;
    double result;

    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            flag=1;
        }
        if(a[i]==l){
            gal=1;
        }
    }
    if(n==1 && l==1){
        cout<<n;
        return 0;
    }

    if(n==1 && l>1){
        long long g=abs(a[0]-0);
        long long h=abs(a[0]-l);
        if(g>h){
            cout<<g;
        }
        else{
            cout<<h;
        }
        return 0;
    }

    sort(a,a+n);

    long long x=abs(a[0]-a[1]);
    long long y=abs(a[0]-0);
    long long z=abs(a[n-1]-l);
    for(i=1;i<n-1;i++){
        if(abs(a[i]-a[i+1])>x){
            x=abs(a[i]-a[i+1]);
        }
    }

    result=(double)x/2;

    if(y>result){
        if(y>z){
            cout<<y;
        }
        else{
            cout<<z;
        }
    }
    else{
        if(result>z){
            cout << fixed << setprecision(13) << result;
        }
        else{
            cout<<z;
        }
    }



}