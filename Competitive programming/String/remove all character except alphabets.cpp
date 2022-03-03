#include<iostream>
using namespace std;

string solve(string s){
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]<65 || s[i]>90 && s[i]<97 || s[i]>122 ){
            s = s.substr(0,i)+s.substr(i+1);
            i--;
        }
    }
    return s;
}


int main(){
  string name = "Yogesh##  Tiwari";
  cout<<solve(name);
}