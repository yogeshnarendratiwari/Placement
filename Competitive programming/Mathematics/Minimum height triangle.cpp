// minimum height triangle

#include <iostream>
using namespace std;


void greatestIntegerFunction(long long &h,long long A,long long b){
    float x = ((2*A)%b) * 10.0f;
    x = x/b;
    if(x>0)
    h=h+1;

}
void minHeight(long long A,long long b){
     long long h = (2*A)/b;
    greatestIntegerFunction(h,A,b);
    cout<<h<<endl;
}

int main(){
  long long A,b;
  cin>>A>>b;
  minHeight(A,b);
}