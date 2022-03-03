#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string path;
    cin>>path;
    int count = 0;

    if(n<=2){
        cout<<"YES"<<endl;
    return 0;
    }
    

    for (int i = 0; i < n-1; i++)
    {
       if(count>k-2)
       {
           cout << "NO" <<endl;
           return 0;
       }
       if(path[i]=='#' && path[i+1]=='#' )
       count++;
       else
       count=0;
    }

    cout<<"YES"<<endl;
    return 0;
    
}