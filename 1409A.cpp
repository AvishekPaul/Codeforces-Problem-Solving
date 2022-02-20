#include<bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t,a,b,x,y;
    cin>>t;

    while(t--){
        cin>>a>>b;
        int c=abs(a-b);
        if(c==0){
            cout<<"0"<<endl;
        }
        else if(c<=10){
            cout<<"1"<<endl;
        }
        else{
            x=c/10;
            y=c%10;
            if(y>0){
                cout<<x+1<<endl;
            }
            else{
                cout<<x<<endl;
            }
        }

    }
}