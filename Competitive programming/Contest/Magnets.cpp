// magnets
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];

    }

    int group=1;
    for (int i = 0; i <n-1; i++)
    {
       if(arr[i]!= arr[i+1])
       group++;
    }
    cout<<group<<endl;
    
}