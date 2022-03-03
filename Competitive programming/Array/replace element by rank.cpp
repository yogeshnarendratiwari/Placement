#include<iostream>
#include <map>
#include <algorithm>
using namespace std;

void solve(int arr[],int n){

    map<int,int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]] = i;
    }
    
    map <int,int>  :: iterator it ;
    sort(arr,arr+n);

    for (int i = 0; i < n; i++)
    {
        it = m.find(arr[i]);
        cout<<
    }
    




}


int main(){

}