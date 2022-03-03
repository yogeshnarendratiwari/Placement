// max and min element 

#include <iostream>
using namespace std;



int max(int arr[],int n){
    int m = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>m)
        m = arr[i];
    }
    return m;
    
}

int min(int arr[],int n){
    int m = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<m)
        m = arr[i];
    }
    return m;
    
}




int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<max(arr,5)<<endl;
    cout<<min(arr,5)<<endl;

}