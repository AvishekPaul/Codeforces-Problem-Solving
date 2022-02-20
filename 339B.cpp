#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    long long n,m,i,j;
    cin>>n>>m;
    long long a[m];

    for(i=0;i<m;i++){
        cin>>a[i];
    }

    long long count=abs(a[0]-1);

    for(i=1;i<m;i++){
        if(a[i]<a[i-1]){
        count=count+(n-(abs(a[i-1]-a[i])));
        }
        else if(a[i]>=a[i-1]){
            count=count+(abs(a[i-1]-a[i]));
        }
    }

    cout<<count;

}