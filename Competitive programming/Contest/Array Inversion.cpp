// Array inversion

#include <iostream>
using namespace std;


int count = 0;
int ArrayInversion(int array[], int n)
{
    int newArray[n];
    int lArray[n];
    int rArray[n];
    int x = array[n - 1];

    // for (int i = 0; i <n; i++)
    // {
    //     cout<<array[i]<<"
    // }
    
   

    //left And right array
     int i = 0, j = 0, k = 0;
    while (k < n)
    {
        if (array[k]<=3)
        {      
           lArray[i] = array[k];
            i++;
            
            
        }
        else if (array[k]>3)
        {
            rArray[j] = array[k];
            j++;
        }
        k++;
    }


    // newArray

    i = 0, j = 0, k = 0;
    while (k < n)
    {
        if (lArray[i] != 0)
        {
            newArray[k] = lArray[i];
            cout<<"left"<<endl;
            cout<<newArray[k]<<endl;
            i++;
        }
        else if (rArray[j] != 0)
        {
            newArray[k] = rArray[j];
             cout<<"right"<<endl;
            cout<<newArray[k]<<endl;
            j++;
        }
        k++;
    }
     for (int i = 0; i <n; i++)
    {
        cout<<newArray[i]<<" ";
    }

    // comparison 
    bool result = true;
    for (int i = 0; i < n; i++)
    {
        if(array[i]!=newArray[i]){
           result = false;
          break;
        }   
    }
    cout<<"arr"<<endl;
    if(result){
        return count;
    }
    else{
        count++;
        ArrayInversion(newArray,n);
    }
    
}

int main()
{
   int n=5;
  int arr[5]={5,3,2,4,1};
  cout<<ArrayInversion(arr,5);
 
}
