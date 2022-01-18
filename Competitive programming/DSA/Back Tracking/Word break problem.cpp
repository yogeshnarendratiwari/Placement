// Work break problem using backTracking

#include <iostream>
using namespace std;



bool dictCheck (string ans,int p){
    string dict [5] = {"cats","cat","and","sand","dog"};
    for(int i = 0 ; i<5 ; i++){
        if(dict[i]==ans.substr(p)){
            return true;
        }
    }
    return false;
}


string StringForm (string s){
    string ans="";
    int p=0;
    for(int i=0 ; i<= s.length()+1 ; i++){

        if()
          
        if(dictCheck(ans,p)){
               ans = ans + "_";
               p = i+1;
        }
        ans = ans + s[i];

    }
    return ans;
}

int main (){
   cout<<StringForm("catsanddog");
}