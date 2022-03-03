#include<iostream>
#include <algorithm>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void movingNegativeToOneSide(int arr[],int n){

    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        if(arr[low]>=0 && arr[high]<0){
           swap(arr[low++],arr[high--]);
        }
        else if(arr[low]<0 && arr[high]>=0){
            low++;
            high--;
        }
        else if(arr[low]<0 && arr[high]<0){
            low++;
        }
        else
        {
            high--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}

void sort(int arr[],int n){
     sort(arr,arr+n);
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
int arr[10] = {-1,-2,5,4,-9,5,1,-11,4,3};
movingNegativeToOneSide(arr,10);
cout<<endl;
sort(arr,10);
}