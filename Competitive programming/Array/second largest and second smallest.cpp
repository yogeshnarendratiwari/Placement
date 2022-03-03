#include<iostream>
using namespace std;

void solve(int arr[],int n){
    int max=INT16_MIN;
    int second_max=INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            second_max=max;
            max= arr[i];
        }
        else if(arr[i]>second_max && max!=arr[i]){
            second_max=arr[i];
        }
    }

    int min=INT16_MAX;
    int second_min=INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        if(min>arr[i]){
            second_min=min;
            min= arr[i];
        }
        else if(arr[i]<second_min && min!=arr[i]){
            second_min=arr[i];
        }
    }

    cout<<second_max<<" "<<second_min;
    
}


int main(){
 int arr[]= {1,2,3,4,5,8,2};
 solve(arr,7);
}