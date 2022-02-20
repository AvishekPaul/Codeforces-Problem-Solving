#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main(){
    int x[3];
    cin>>x[0]>>x[1]>>x[2];

    sort(x,x+3);

    int a= (abs(x[0]-x[1])+abs(x[1]-x[2]));
    cout<<a;
}
    