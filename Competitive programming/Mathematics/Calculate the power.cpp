// Calculate the power

#include <iostream>
using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    b = b%(1000000007);
    a = a % (1000000007);
    long long product = 1;
    for (int i = 0; i < b; i++)
    {
        product = (product * a)% (1000000007);
    }
    cout<<product<<endl;
    
}