#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

void permutation(string s,int l,int r,vector <string> &v){

    if(l==r){
        v.push_back(s);
        return;
    }
    for (int i =l; i<= r; i++)
    {
        swap(s[i],s[l]);
        permutation(s,l+1,r,v);
        swap(s[i],s[l]);
    }
    
}

int main(){
     vector<string> v;
     string s = "abc";
     permutation(s,0,2,v);
     for (int i = 0; i <v.size(); i++)
     {
        cout<<v[i]<<" ";
     }
     
}