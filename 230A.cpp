#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    int x[n],y[n];
    int a,b;

    for(int i=1;i<=n;i++){
        cin>>a>>b;
        x[i]=a;
        y[i]=b;
    }
    int i,j;

    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(x[i]>x[j]){
                int temp=x[j];
                x[j]=x[i];
                x[i]=temp;

                int temp2=y[j];
                y[j]=y[i];
                y[i]=temp2;
            }
        }
    }
    for(i=1;i<=n;i++){
        if(s>x[i]){
            s=s+y[i];
            continue;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    

    cout<<"YES";

}