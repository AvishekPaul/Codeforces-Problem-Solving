#include<iostream>
using namespace std;

int main(){
    int n,i,j,x,y,z,w;
    cin>>n;
    int a[n],b[n],c[n];

    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=i;
        c[i]=i;
    }


    for(j=0;j<=1;j++){
    for(i=1;i<n;i++){
        if(j==0 && a[i]>a[0]){
            x=a[0];
            a[0]=a[i];
            a[i]=x;

            y=b[0];
            b[0]=b[i];
            b[i]=y;
            

        }
        
        
        if(j==1 && a[n-1-i]<a[n-1]){
            x=a[n-1];
            a[n-1]=a[n-1-i];
            a[n-1-i]=x;

            y=c[n-1];
            c[n-1]=c[n-1-i];
            c[n-1-i]=y;
            
            

        }
    }
    }
    if(b[0]==n-1 && (c[n-1]!=1 || c[n-1]!=2)){
        z=b[0];
        w=n-c[n-1]-1;
    }
    else if(c[n-1]<b[0] && (c[n-1]!=0 || c[n-1]!=1 || c[n-1]!=2)){
        z=b[0];
        w=n-c[n-1]-2;
    }
    else{
    z=b[0];
    w=n-c[n-1]-1;
    }
    

    
   cout<<w+z;
    
    

    
}