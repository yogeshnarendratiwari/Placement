#include<iostream>
using namespace std;

void solve(string s){
    int hash[58];
    for(int i=0 ; i<58 ; i++){
        hash[i]=0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
        hash[s[i]-65]++;
    }

    for (int i = 0; i < 58; i++)
    {
        if(hash[i]==1)
        cout<<char(i+65)<<endl;
    }
    
    
}

int main(){

   solve("this a ct");

}