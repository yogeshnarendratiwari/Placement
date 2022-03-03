#include<iostream>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n>0){
        rev = rev*10 + n%10;
        n=n/10;
    }
    return rev;
}

inline bool isPalindrome(int n) {
    return n==reverse(n)? true : false;
}

int main(){
   int n = 123;
   cout << isPalindrome(n);
}