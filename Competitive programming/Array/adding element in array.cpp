#include<iostream>
using namespace std;

void insert_at_begin(int *arr,int n,int x){
   for (int i = n-1; i >0 ; i--)
   {
       arr[i]=arr[i-1];
   }
   arr[0]=x;
   
}

void insert_at_end(int *arr,int n,int x){
   
   arr[n-1]=x;
   
}

void insert_at_index(int *arr,int n,int index,int x){
     
     for (int i = n-1; i > index; i--)
     {
        arr[i]=arr[i-1];
     }
     arr[index]=x;
     
}

int main(){

int arr[9] = {1,2,3,4,5,6,7,8};

// insert_at_begin(arr,9,11);
//  insert_at_end(arr,9,11);
// insert_at_index(arr,9,5,40);

for(int i=0 ; i<9 ; i++){
    cout<<arr[i]<<" ";
}

}