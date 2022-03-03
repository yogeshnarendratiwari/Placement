#include<iostream>
using namespace std;


string solve(string s){

    int n = s.length();
    if(s[0]>=97 && s[0]<=122) s[0] =s[0]-32;
    if(s[n-1]>=97 && s[n-1]<=122) s[n-1] =s[n-1]-32;

    for (int i = 1; i <n-1 ; i++)
    {
        if(s[i+1]==' ' || s[i-1]==' ' && s[i]>=97 && s[i]<=122)
        s[i] = s[i]-32;
        
    }
    return s;
    
}

int main(){
    cout<<solve("this is a cat");
}