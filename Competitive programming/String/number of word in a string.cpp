#include<iostream>
using namespace std;

int solve(string s){
    int count=1;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!=s[i+1] && s[i]==' ')
        count++;
    }
    return count;
}

int main(){
string s = "This is  a cat";
cout<<solve(s);
}