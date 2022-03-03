#include<iostream>
#include <stack>
using namespace std;
// using stack
void solve(string s){
    stack <string> st;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {  
    
        
        if(s[i]==' '){
        st.push(temp);
         temp="";
        }
        else{
            temp = temp+s[i];
        }
    }
    st.push(temp);

    while (!st.empty())
    {
        cout<<st.top();

        if(st.size()>1)
        cout<<" ";

        st.pop();
    }
    
    
    
}


string solve2(string s){
    string ans="";
    string temp="";

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==' '){
           ans=temp+" "+ans;
           temp="";
        }
        else{
            temp = temp+s[i];
        }
    }
    ans=temp+" "+ans;
    return ans;
}

int main(){
  solve("this is a cat");
  cout<<endl;
  cout<<solve2("this is a cat");
}