// wrong subtraction

#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    if(n>=2 && n<=1000000000 && k>=1 && k<=50){
        for (int i = 0; i < k; i++)
        {
            if(n%10 !=0)
            n=n-1;
            else
            n = n/10;
        }
        if(n>0)
        cout<<n<<endl;
        
    }
}