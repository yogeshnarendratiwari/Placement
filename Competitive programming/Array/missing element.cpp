#include<iostream>
using namespace std;



void sorted_func_use_sum_formula(int arr[],int n){
int sum=0;
for (int i = 0; i < n; i++)
{
    sum += arr[i];
}
int s = (n*(n+1))/2;
cout<<"missing element is : "<<s-sum<<endl;
}

void unsorted_func_use_hasing(int arr[],int n){


    int h;
    for (int i = 0; i < n; i++)
    {
        if(h<arr[i]) h=arr[i];
    }
    
    int Hash[h+1];
     for (int i = 0; i < h+1; i++)
    {
        Hash[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        Hash[arr[i]]++;
    }

    for (int i = 1; i < h+1; i++)
    {
        if(Hash[i]==0) cout<<i<<endl;
    }
    
}

void sorted_func_single_element_missing(int arr[],int n){

    int d = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]-i != d){
            cout<<i+d<<endl;
            break;
        }
    }
    
}
void sorted_func_more_element_missing(int arr[],int n){

    int d = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]-i!=d){
            
            while (d<arr[i]-i)
            {
                cout<<i+d<<endl;
                d++;
            }
            
        }
    }
    
}


int main(){

    int arr[5] = {1,2,3,6,7};
    unsorted_func_use_hasing(arr,5);

}