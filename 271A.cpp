#include<iostream>
#include<string>
#include <sstream>
using namespace std;

int main(){
    int y;
    string geek;
    cin>>y;
     while(1){
         y++;
         ostringstream str1;
         str1<<y;
         geek = str1.str();

         if(geek[0]!=geek[1] && geek[0]!=geek[2] && geek[0]!=geek[3] && geek[1]!=geek[2] && geek[1]!=geek[3] && geek[2]!=geek[3]){
             break;
         }
     }

     cout<<geek;
}