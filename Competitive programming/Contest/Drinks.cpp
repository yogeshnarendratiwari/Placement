// Drinks
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int Orange = 0;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin>>p;
        Orange = Orange + p;

    }
    cout<<(Orange*1.0f)/n<<endl;
    
}