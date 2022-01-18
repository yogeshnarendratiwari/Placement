// Reverse game 
#include <iostream>
using namespace std;


void Reverse(int * a , int n , int start , int end){
    while(start<=end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

void ReverseGame(int arr[],int N,int k){
    int s = 0;
    int times = N;
    while(times--){
        Reverse(arr,N,s,N-1);
        s++;
    }
    for (int i = 0; i < N; i++)
    {
       if(arr[i]==k)
       cout<<i<<endl;
    }
    
}

int main(){
    
    int N , k,t;
    cin>>t;
    while(t--){
     cin>>N>>k;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        arr[i] = i;
    }
    
     ReverseGame(arr,N,k);

    }
   

}

