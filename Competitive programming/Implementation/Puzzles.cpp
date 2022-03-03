#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+m);
     int min = INT16_MAX;
     int i=0 ;int j=n-1;
     while(j<= m-1){
         if(arr[j]-arr[i]<= min)
         min = arr[j]-arr[i];
         i++;
         j++;
     }

     cout<<min<<endl;
     
}