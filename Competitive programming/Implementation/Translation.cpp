// Translation

#include <iostream>
using namespace std;


void reverse(string& s){
    int start =0;
    int end= s.length() - 1;
    while(start<=end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
int main(){
  string s,t;
  cin>>s>>t;
  reverse(s);
  if(s==t)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;


}