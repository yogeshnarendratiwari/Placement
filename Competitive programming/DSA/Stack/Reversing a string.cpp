// Reversing a string

#include <iostream>
#include <stack>
using namespace std;

string Reverse(string s){
    stack <char> st;
   
    for(int i=0 ; i <s.length() ; i++){
        st.push(s[i]);
    }
    
    while(st.size()!=0){
        cout<<st.top();
        st.pop();
    }
}

int main(){
 cout<< Reverse("Leetcode");
}