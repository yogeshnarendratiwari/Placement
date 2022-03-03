#include<iostream>
using namespace std;

void solve(string s){
  
 for (int i = 0; s[i] != '\0'; i++)
 {
     if(s[i]='y' && s[i]='Y' && s[i]!='a' && s[i]!='e' &&s[i]!='i' &&s[i]!='o' &&s[i]!='u' &&s[i]!='A' &&s[i]!='E' &&s[i]!='I' &&s[i]!='O' &&s[i]!='u' ){
         if(s[i]>=65 && s[i]<=90)
         cout << "."<<char(s[i]+32);
         else
         cout << "."<<(s[i]);
     }
 }
 

}


int main(){
string s;
cin>>s;
solve(s);
}