#include<iostream>
#include <map>
using namespace std;

int main(){
     string s = "this is a cat";
     map<char,int> m;
     for (int i = 0; i < s.length(); i++)
     {
         m[s[i]]++;
     }

     for(auto x : m){
         if(x.first!=' '){
             cout<<x.first<<" --> "<<x.second<<endl;
         }
     }
     
}