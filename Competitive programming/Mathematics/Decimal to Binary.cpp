#include<iostream>
using namespace std;

string DecimalToBinary(int n){
    string output="";
    int result=0;
    while (n>0)
    {
        int r = n%2;
        n=n/2;
        output+=to_string(r);
    }
    int start=0;
    int end = output.length()-1;
    while(start<=end){
        swap(output[start],output[end]);
        start++;
        end--;
    }
    return output;
}

int main(){
  cout<<DecimalToBinary(8);
}