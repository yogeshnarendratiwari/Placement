#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

int l=n ,h=n;
for (int i = 0; i < 2*n+1; i++)
{
    if(i<=n){
        int ele = 0;
    for (int j = 0; j<2*n+1; j++)
    {
        if(j>= l && j<= h){
        cout<<ele<<" ";
        }
        else 
        cout<<" "<<" ";

        if(j>= l && j< n) ele++;
        else if(j>=n) ele--;       
    }

    
    }
    else{
        int ele=0;
        for (int j = 0; j<2*n+1; j++)
    {
        if(j>=l && j<= h)
        cout<<ele<<" ";
        else
        cout<<" "<<" ";

         if(j>= l && j< n) ele++;
        else if(j>=n) ele--; 

       
    }

    }

    if(i<n) {
        l--; h++;
    }
    else{
        l++; h--;
    }
    cout<<endl;
}

}