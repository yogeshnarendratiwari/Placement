#include<iostream>
using namespace std;

int main(){
      string s;
      cin>>s;
      // valid : numbers,lowercase,Uppercase allowed

      for(int i=0 ; s[i]!='\0' ; i++){
          if(!(s[i]>= 65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=48 && s[i]<=57))
          {
              cout<<"Not valid"<<endl;
              return 0;
          }
      }
      cout<<"Valid"<<endl;
      return 0;
}