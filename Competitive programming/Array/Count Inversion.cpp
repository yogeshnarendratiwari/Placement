#include<iostream>
#include <algorithm>
using namespace std;

typedef long long var;

var brute_force(int arr[],int n){

    var invCount=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
             if(arr[i]>arr[j])
             invCount++;
        }
        
    }
    return invCount;
    
}

var hash_map(int arr[],int n){
    var max = INT64_MIN;
   for (int i = 0; i < n; i++)
   {
       if(max<arr[i])
       max = arr[i];
   }
   
    
   var Hash[max+1];
   for (int i = 0; i < max+1; i++)
   {
       Hash[i]=0;
   }
   
   for (int i = 0; i < n; i++)
   {
       Hash[arr[i]] = i;
   }
  
   
   sort(arr,arr+n);
   var invCount=0;
   for (int i = 0; i < max+1; i++)
   {
       if(i-Hash[arr[i]]>0)
       invCount += i-Hash[arr[i]];
   }
   cout<<invCount<<endl;
   
   return invCount;

}



int main(){
      int arr[5] = {2,4,1,3,5};
      cout<<brute_force(arr,5)<<endl;
      cout<<hash_map(arr,5)<<endl;
}