#include <iostream>
using namespace std;

void checkPalindrome(int n){
    int newNumber = 0;
    int oldNumber = n;
    while (n>0)
    {
        newNumber = newNumber*10 + n%10 ;
        n = n/10;
    }
    if(newNumber == oldNumber)
    cout<<"Yes ! It's a palindrome number."<<endl;
    else
    cout<<"No ! It is not a palindrome number."<<endl;

    
}

int main(){
    int n;
    cin>>n;
    checkPalindrome(n);
}