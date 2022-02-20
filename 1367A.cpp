#include<bits/stdc++.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    char str[100],strabc[100]=" ";

    while(t--){
        cin>>str;
        n=strlen(str);
        for(int i=0;i<n;i++){
            strabc[i]='\0';
        }
        strabc[0]=str[0];
        for(int i=1;i<n;i=i+2){
            strncat(strabc, &str[i], 1);

        }

        cout<<strabc<<endl;

    }
}