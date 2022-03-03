
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;
        map <int,int> m;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            m[a[i]] = i;

            
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            
        }
        
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
           if(a[i]>k)
           break;
           k = k+b[m[a[i]]];
           
        }
        
      cout<<k<<endl;
        
    }
}