#include<iostream>
using namespace std;



int main(){
int arr[5]={1,2,3,4,5};
int l=0,h=4,mid;

int ele=4;
while(l<=h){
   mid=(l+h)/2;
   if(arr[mid]==ele){
       cout<<"found";
       return 0;
   }
   else if(arr[mid]<ele){
       l=mid+1;
   }
   else h=mid-1;
}
cout<<"not found";
}