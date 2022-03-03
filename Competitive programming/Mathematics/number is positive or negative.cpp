#include<iostream>
using namespace std;
typedef int var;
inline string positive_or_negative(var n){
return n>0 ? "positive" : "negative";

}

int main(){
cout<<positive_or_negative(-8);
}