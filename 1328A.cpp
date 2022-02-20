#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long a,b;

    while(t--){
        cin>>a>>b;
        if(a%b==0){
            cout<<"0"<<endl;
        }
        else{
        long long x=a%b;
        long long c=b-x;
        cout<<c<<endl;
        }
    }
}