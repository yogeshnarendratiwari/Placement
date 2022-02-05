// Reversing the array

#include <iostream>
using namespace std;

void reverse (int arr[],int n,int start, int end){
       while (start<=end)
       {
           int temp = arr[start];
           arr[start] = arr[end];
           arr[end] = temp;
           start++;
           end--;
       }
       
}


int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr,5,0,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}