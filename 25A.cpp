#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n-1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=2;i<=n;i=i+2){
        int d=a[i]-a[i-1];
        int b= abs(d);
        int e= a[i]-a[i+1];
        int c=abs(e);
        
        if(b%2!=0){
            if(c%2==0){
                cout<<i-1;
                break;

            }
            else{
                cout<<i;
                break;
            }

        }
        
        else if(b%2==0 && c%2!=0){
            cout<<i+1;
            break;
        }
        else if(b%2==0){
            continue;
        }
        
    }
}
    

    
    