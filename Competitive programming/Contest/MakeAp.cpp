// Make A.P

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int A,B,C;
        A = 2*b-c;
        B = a+c;
        C = 2*b-a;

    
            if(A>0 && A%a ==0)
           {
               cout<<"YES"<<endl;
           }
            else if(B>0 && B%2==0 && (B/2)%b ==0)
           {
               cout<<"YES"<<endl;
           }
           else if(C>0 && C%c ==0)
           {
               cout<<"YES"<<endl;
           }
           else{
                cout<<"NO"<<endl;
           }
          
          

        
        





    }
}