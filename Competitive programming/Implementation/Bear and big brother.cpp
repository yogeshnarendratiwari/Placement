// Bear and big brother

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    if(a<=b && a>=1 && a<=10 && b>=1 && b<=10){
        int years=0;
        while (a<=b)
        {
            a = a * 3;
            b = b * 2;
            years++;
        }
        cout<<years<<endl;
        
    }
}