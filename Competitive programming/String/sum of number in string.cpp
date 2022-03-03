#include<iostream>
#include <cstring>
using namespace std;

int solve(string s){

    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>=48 && s[i]<=57){
            sum = sum + s[i] - 48;
        }
    }
    return sum;
}

int main(){
  cout<<solve("123xyz");

}