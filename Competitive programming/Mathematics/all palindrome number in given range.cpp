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

void Palindrome_number_in_range(int min,int max){
    for (int i = min ; i <= max; i++)
    {
        if(isPalindrome(i))
        cout<<i<<" ";
    }
    
}

int main(){
  Palindrome_number_in_range(10,50);
}