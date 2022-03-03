#include<iostream>
using namespace std;

int main(){
int arr[5] = {1,2,3,4,5};

int sum=0;
for(auto x : arr){
   sum=sum+x;
}
cout<<sum<<endl;
}