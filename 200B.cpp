#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,sum=0;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    double b=(double)sum/(double)n;
    cout<<fixed<<setprecision(13)<<b;

}