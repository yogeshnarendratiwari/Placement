#include <iostream>
#include <algorithm>
using namespace std;

int Kth_Max(int arr[],int k,int n){
 sort(arr,arr+n,greater<int>());
 return arr[k-1];
}
int Kth_Min(int arr[],int k,int n){
 sort(arr,arr+n);
 return arr[k-1];
}

int main(){
    int n;
    cin>>n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout << Kth_Max(arr,k,n)<<endl;
    cout << Kth_Min(arr,k,n)<<endl;
    
}