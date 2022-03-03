#include<iostream>
using namespace std;

void method1(int arr[],int n,int k){
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i])
        max = arr[i];
    }
    int Hash[max+1];
    for (int i = 0; i < max+1; i++)
    {
        Hash[i]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        
        Hash[arr[i]]++;
    }

    int num = n/k;
    for (int i = 0; i < max+1; i++)
    {
        if(Hash[i]>num)
        cout<<i<<endl;
    } 
}

void method2(int arr[],int n,int k){
     int ansIndex = 0;
     int ansCount=1;

     for (int i = 1; i < n; i++)
     {
        if(arr[i]==arr[ansIndex])
        ansCount++;
        else
        ansCount--;

        if(ansCount==0){
            ansIndex=i;
            ansCount=1;
        }
     }
     
     int count=0;

     for (int i = 0; i < n; i++)
     {
        if(arr[i]==arr[ansIndex])
        count++;
     }
     
     if(count>n/k)
     cout<<arr[ansIndex]<<endl;
     else
     cout<<-1<<endl;

}


int main(){
  int arr[6] = {1,1,1,2,8,1};
  method1(arr,6,2);

}