#include<iostream>
using namespace std;
typedef long long var;


void solve(string s){
    var total=0,pre=0,suc=0;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='0')
        total++;
        
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='0')
        pre++;
        else
        break;
    }

    for (int i = s.length()-1; i >0; i--)
    {
        if(s[i]=='0')
        suc++;
        else
        break;
    }
    if(total-pre-suc>0)
    cout<<total-pre-suc<<endl;
    else
    cout<<0<<endl;

}
int main(){
 var t;
 cin>>t;
 while(t--){
     string s;
     cin>>s;
     solve(s);
 }
}