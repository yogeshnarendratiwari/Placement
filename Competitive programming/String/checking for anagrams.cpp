#include<iostream>
using namespace std;

bool solve(string a,string b){

    if(a.length()!= b.length())
    return false;

    int Hash[58];

    for (int i = 0; i < 58; i++)
    {
        Hash[i]=0;
    }

    for (int i = 0; i < a.length(); i++)
    {
        Hash[a[i]-65]++;
    }

    for (int i = 0; i < b.length(); i++)
    {
       Hash[b[i]-65]--;
    }

    for (int i = 0; i < 58; i++)
    {
        if(Hash[i]<0)
        return false;
    }
    return true;
}


int main(){
   cout<<solve("deciaaa","aaldeci");
}