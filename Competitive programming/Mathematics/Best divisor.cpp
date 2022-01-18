// Best divisor
#include <bits/stdc++.h>
using namespace std;

long long maximum(vector<long long> v){
    
    long long count=0;
    long long maxi = LONG_LONG_MIN;
    long long j=-1;
    for (long long i = 0; i < v.size(); i++)
    {
       if(v[i]>maxi){
              maxi=v[i];
              j=i;
       } 
    }

     for (long long i = 0; i < v.size(); i++)
    {
       if(v[i]==maxi){
         count = count+1;
       }
    
     
    }
    
    if(count>1)
    return -1;
    return j;

}
long long sum(long long n){
    long long s = 0;
    while(n>0){
        s = n%10 + s;
        n =n/10;
    }
    return s;
}

vector<long long> func(vector<long long> v,long long max){
    vector<long long> maxi;
     for (long long i = 0; i < v.size(); i++)
    {
       if(max==v[i])
       maxi.push_back(i);
    }
   
   return maxi;
}

void divisor(long long num){
    // number of divisors
   vector <long long> v;
    for(long long i=1 ; i<=num ; i++){
        if(num%i==0)
        v.push_back(i);
    }

   vector <long long> r,finale;
    for (long long i=0 ; i<v.size() ; i++)
    {
      r.push_back(sum(v[i]));
    
    }

   
    if(maximum(r)!=-1)
    cout<<v[maximum(r)];
    else{
        long long min = LONG_LONG_MAX;;
        finale = {func(r,r[maximum(r)])};
        for(long long i=1 ; i<finale.size();i++){
            if(min>v[finale[i]]){
                min = v[finale[i]];
            }
        }
        cout<<min<<endl;

    } 
}


int main(){
    long long n;
    cin>>n;
    divisor(n);

    
}