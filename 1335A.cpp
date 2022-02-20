#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long t;
    cin>>t;
    long long n,count=0,m;
    while(t--){
        cin>>n;
        if(n==1 || n==2){
            cout<<"0"<<endl;
        }
        else{
            if(n%2==0){
                m=n/2-1;
            }
            else{
                m=n/2;
            }
            cout<<m<<endl;
        }
    }
}