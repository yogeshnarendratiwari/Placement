// tram

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
 if(n>=2 && n<=1000){
    int num = 0;
    int max = 0 ;
    
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a<0 || a>1000 || b<0 || b>1000)
        break;
       else if(i==0&&a!=0)
        break;
        else if(i==n-1 && b!=0)
        break;
        num = num - a + b;
        if (num >= max)
            max = num;
    }

    cout<<max<<endl;

 }
}