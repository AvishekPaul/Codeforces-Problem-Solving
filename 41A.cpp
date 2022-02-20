#include<iostream>
#include <cstring>
#include<string.h>
using namespace std;

int main(){
    char s1[100];
    char s2[100];
    char t[100];
    int j;
    cin>>s1>>s2;
    int n = strlen(s1);

    for(int i=n-1,j=0;i>=0;i--,j++){
        t[j]=s1[i];
    }
    
    if(strcmp(s2,t)==0){
        cout<<"YES";

    }
    else
    {
        cout<<"NO";
    }
    
}