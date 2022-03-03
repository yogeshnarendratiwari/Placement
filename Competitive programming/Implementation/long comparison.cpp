#include <iostream>
#include <cstring>
using namespace std;

long long NumberWithZeros(long long num,long long zeros){
    string number = to_string(num);
    for(long long i=0 ; i<zeros ; i++){
        number = number + "0";
    }

    return stoi(number);
    
}

void longComparison(long long a , long long az , long long b,long long bz){
    long long af = NumberWithZeros(a,az);
    long long bf = NumberWithZeros(b,bz);
    if(af<bf)
    cout<<"<";
    else if(af>bf)
    cout<<">";
    else
    cout<<"=";
    cout<<endl;
}



int main(){
    long long t;
    std :: cin >> t;
    while(t--){
        long long a , az,b , bz;
        cin>>a>>az;
        cin>>b>>bz;
        longComparison(a,az,b,bz);
    }
    return 0;
    
}