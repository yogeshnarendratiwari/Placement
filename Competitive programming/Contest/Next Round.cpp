// Next Round 

#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    cin>>arr[0];
    for (int i = 1; i < n; i++)
    {
      int a;
      cin>>a;
      if(a<=arr[i-1])
      arr[i] = a;
    }
    int KScore = arr[k-1];

    int ans = 0;

    for (int i = 0; i <n; i++)
    {
        if(arr[i]>=KScore && arr[i]>0)
          ans++;
    }

    cout<<ans<<endl;
    
    
}