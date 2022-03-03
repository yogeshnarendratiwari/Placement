#include<iostream>
#include <algorithm>
using namespace std;

float median(int arr[],int n){
 sort(arr,arr+n);
 if(n % 2 ==0){
     return (arr[n/2]+arr[n/2-1])/(2.0f);
 }
 else {
     return arr[(n-1)/2];
 }
}

int main(){
int arr[5] = {1,5,8,9,4};    
cout<<median (arr,5);
}