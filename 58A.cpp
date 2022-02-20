#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char s[100];
    int a[4]={0};
    int count=0;

    cin>>s;
    int x = strlen(s);
    for(int i=0;i<x;i++)
    {
        if(s[i]=='h'){
            a[0]=1;
            continue;
        }
        if(s[i]=='e'){
            if(a[0]==1){
                a[1]=1;
                continue;
            }
        }
        if(s[i]=='l'){
            if(a[0]==1 && a[1]==1){
                a[2]=1;
                count++;
                continue;
            }
        }
        if(s[i]=='o'){
            if(a[0]==1 && a[1]==1 && a[2]==1 && count>1){
                a[3]=1;
                continue;
            }
        }
    }

    if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}