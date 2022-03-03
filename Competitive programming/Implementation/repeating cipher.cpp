#include<iostream>
using namespace std;

typedef long long var;

void solve(string s){
    var i=0,count=1;
    while(i<s.length()){
        cout<<s[i];
        i += count;
        count++;
    }
}


int main(){
    
        int length;
        cin>>length;
        char s[length];
        cin>>s;
        solve(s);
    
    
}