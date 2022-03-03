#include<iostream>
using namespace std;

void solve(int arr[],int n,int k){
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }



    int Hashmap[max+1];
    for (int i = 0; i < max+1; i++)
    {
        Hashmap[i]=0;
    }

    for (int i = 0; i < n; i++)
    {
        Hashmap[arr[i]]++;
    }
    
    for (int i = 0; i < max+1; i++)
    {
        if(Hashmap[i]>n/k)
        cout<<i<<endl;
    }
    
    
    
}


int main(){
   int arr[]= {3,1,2,2,1,2,3,3};
   solve(arr,8,4);
}