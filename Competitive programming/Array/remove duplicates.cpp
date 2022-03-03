#include<iostream>
using namespace std;

void solve(int arr[],int n){
    int ptr1=0;
    int ptr2=0;
    while(ptr2<n){
        if(ptr1==ptr2){
            cout<<arr[ptr1]<<" ";
            ptr2++;
        }

        if(arr[ptr1]!=arr[ptr2])
        ptr1=ptr2;
        else
        ptr2++;
    }

    
    
}


int main(){
 int arr[] = {1,1,1,2,2,3,3,3,3,4,4,9,9};
 solve(arr,13);
}