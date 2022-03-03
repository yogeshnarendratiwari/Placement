#include<iostream>
using namespace std;

string solve(string s){
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='(' || s[i]==')'){
            s = s.substr(0,i)+s.substr(i+1);
            i--;
        }
    }
    return s;
}


int main(){
  string equation = "(a+b+(c-d))";
  cout<<solve(equation);
}