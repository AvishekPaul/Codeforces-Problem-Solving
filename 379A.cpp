#include<iostream>
using namespace std;
int main(){
    int n,m;
    int p,q,s;
    cin>>n>>m;
    s=n+n/m;
    while(s/m>n/m){
        p=s/m;
        q=n/m;
        n=s;
        s=s+(p-q);
    }
    cout<<s;
}