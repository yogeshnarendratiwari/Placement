#include<iostream>
using namespace std;

// Brute force
int solve(int num){
    int x = 1;

    int count=0;

    while(x<=num){
       if((num&x) !=0 ) count++;
       x = x<<1;
    }
    return count;
    
}

int total_set_bits(int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum+solve(i);
    }
  return sum;  
}

// Optimal --1
int solve2(int num){
    int arr[num+1];
    arr[0] = 0;
    int sum=0;
    for (int i = 1; i < num+1; i++)
    {
            arr[i] = arr[i/2] + i%2;
            sum = sum + arr[i];
    }
    return sum;
    
}

int GreatestPowerOf2(int n){
    int x = 0;
    while((1<<x) <= n){
        x++;
    }
    return x-1;
}

// Optimal --2

int solve3(int num){
       int x  = GreatestPowerOf2(num);
       cout<<x;
       int bits = x * (1<<(x-1));
       bits += num-(1<<x)+1;
       bits += solve3(num-(1<<x));

       return bits;
}

int main(){
 cout<< solve3(4);
}