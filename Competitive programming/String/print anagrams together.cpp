#include<iostream>
#include <map>
#include <algorithm>
using namespace std;

int sum(string st){
    int l=st.length();
    int s=0;
    for(int i=0 ; i<l ; i++){
        s += st[i];
    }

    return s;
}


void solve(string arr[],int n){
    sort(arr,arr+n);
    int Hash[n];
    for (int i = 0; i < n; i++)
    {
        int s = sum(arr[i]);
        Hash[i]=s;
    }
    
    map <int,int> m;

    for (int i = 0; i < n; i++)
    {
        m[Hash[i]]++;
    }
        

    for(auto x : m){
            for (int i = 0; i < n; i++)
            {
                if(x.first==Hash[i])
                cout<<arr[i]<<" ";
            }
            cout<<endl;  
    }
    
}


int main(){
   string words[] = {"no","on","is"}
;
   solve(words,3);
}