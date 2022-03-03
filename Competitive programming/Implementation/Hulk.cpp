// Hulk
#include <iostream>
using namespace std;

int main(){
    string x =  "hate" ;
    string y = "love";
    
    int n;
    cin>>n;

    string ans = "I ";
    for (int i = 1; i <= n; i++)
    {   
           if(i%2==0)
           ans = ans + y;
           else
           ans = ans + x;
        if(n!=1 && i!=n)
        ans = ans + " that I ";
    }
    ans = ans +" it ";
    cout<<ans;
    
}