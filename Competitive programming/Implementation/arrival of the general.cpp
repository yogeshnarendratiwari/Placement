#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    
    int max = arr[0];
    int min = arr[0];
    int maxIndex = 0;
    int minIndex = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>max)
        {
            max = arr[i];
            maxIndex = i;
        }
        if(arr[i]<=min){
        min = arr[i];
        minIndex = i;
    }
    }

    if(max==arr[0] && min!=arr[n-1])
    {
        cout<<n-1-minIndex<<endl;
        return 0;
    }
    else if(max!=arr[0] && min==arr[n-1])
    {
        cout<<maxIndex<<endl;
        return 0;
    }
    else if(max==arr[0] && min==arr[n-1]){
        cout<<0<<endl;
        return 0;
    }
    

    int minSwap = n-1-minIndex;
    int maxSwap = maxIndex;
    int total = minSwap+maxSwap;

    if(minIndex<maxIndex)
    cout<<total-1<<endl;
    else
    cout<<total<<endl;
    
}