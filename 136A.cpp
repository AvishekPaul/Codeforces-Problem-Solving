#include<iostream>
using namespace std;

int main(){
    int n,x,y;
    cin>>n;
    int a[n],b[n];

    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=i;
    }

    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[j]<a[i]){
                x=a[j];
                a[j]=a[i];
                a[i]=x;

                y=b[j];
                b[j]=b[i];
                b[i]=y;
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout<<b[i]<<" ";
        
    }

}