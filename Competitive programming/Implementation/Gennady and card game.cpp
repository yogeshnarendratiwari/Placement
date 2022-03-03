#include<iostream>
using namespace std;

void CardGame(string arr[],string x,int n){
    for (int i = 0; i < n; i++)
    {
        if(arr[i][0]==x[0] || arr[i][1]==x[1])
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
    
}


int main(){
    int n=5;
    string arr[n];
    string x;
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    CardGame(arr,x,n);

}