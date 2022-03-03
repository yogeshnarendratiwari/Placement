#include <iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toast = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;
    int min;
    
    if(toast<lime && toast<salt)
    min=toast;
    else if(lime > salt)
    min = salt;
    else 
    min=lime;
    
    cout<<min/n<<endl;
    
}