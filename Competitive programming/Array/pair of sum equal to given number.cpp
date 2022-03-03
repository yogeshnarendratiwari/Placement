#include<iostream>
#include<algorithm>
using namespace std;


void unsorted_method_1(int arr[],int n,int k){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==k)
            cout<<arr[i]<<"+"<<arr[j]<<"="<<k<<endl;
        }   
    }
}

void unsorted_hashing(int arr[],int n,int k){
  int max = INT16_MIN;
  for (int i = 0; i < n; i++)
  {
      if(max<arr[i])
      max=arr[i];
  }

  int Hash[max+1];
  for (int i = 0; i <max+1; i++)
  {
      Hash[i]=0;
  }
  
  for (int i = 0; i <n; i++)
  {
      if(Hash[k-arr[i]]!=0 && k-arr[i]>=0){
            cout<<arr[i]<<"+"<<k-arr[i]<<"="<<k<<endl;
      }
      Hash[arr[i]]++;
  }
  
  

}


void sorted_method_no_duplicate(int arr[],int n,int k){
    sort(arr,arr+n);

    int i=0,j=n-1;

    while (i<=j)
    {
        if(arr[i]+arr[j]==k) {
            cout<<arr[i]<<"+"<<k-arr[i]<<"="<<k<<endl;
            i++; j--;
        }
        else if(arr[i]+arr[j]>k)
        j--;
        else
        i++;
    }
    

}
int main(){
      int arr[] = {1, 5, 7, 1};
     
}