// Odd grasshopper


#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,jn;
        cin>>x>>jn;

        for (int j = 1; j<=jn; j++)
        {
            if(x%2==0)
            x = x-j;
            else
            x = x+j;
        }

        cout<<x<<endl;
        
    }
}