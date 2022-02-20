#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s[200];
    cin>>s;
    int n=strlen(s);

    for(int i=0;i<n;i++){
        if((s[i]=='W') && (s[i+1]=='U') && (s[i+2]=='B')){
            i=i+2;
        }
        else{
            cout<<s[i];
            if((s[i+1]=='W') && (s[i+2]=='U') && (s[i+3]=='B')){
                cout<<" ";
            }
        } 
    }


}