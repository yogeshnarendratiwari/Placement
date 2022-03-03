#include<iostream>
using namespace std;

void solve(string s){
    int n = s.length();
    for(int i=0 ; i<(1<<n) ; i++){
        string ans="";
        for (int j = 0; j<n ; j++)
        {
            if((i & (1<<j))!=0)
            ans = ans + s[j];
        }
        cout<<ans<<" ";
        
    }
}


int main(){
solve("abc");
}