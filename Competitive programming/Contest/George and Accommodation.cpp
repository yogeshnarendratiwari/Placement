// George and Accommodation
#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int count=0;
    for (int i = 0; i < n; i++)
    {
    int p,q;
      cin>>p>>q;
      if(q-p >1)
      count++;
    }
    cout<<count<<endl;
    
}