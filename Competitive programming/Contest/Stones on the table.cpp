// stones on th table
#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int ans=0;
    
    if(n>=1 && n<=50){
        string s;
        cin>>s;
        bool canCode = true;

        for (int i = 0; i < n; i++)
        {
           if(s[i]!='R' && s[i]!='G' && s[i]!='B' )
           canCode = false;
        }
        
        

        for (int i = 0; i < n-1; i++)
        {
            if(s[i]==s[i+1])
            ans++;
        }

        
        
       
    }
    cout<<ans<<endl; 
}