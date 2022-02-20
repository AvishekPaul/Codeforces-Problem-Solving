#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int a[5];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    int b=a[0]+a[2]-a[3];
    int x=a[0]-b;
    int c=a[2]-b;
    cout<<x<<" "<<b<<" "<<c;
}