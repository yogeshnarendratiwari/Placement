#include<iostream>
using namespace std;




int main(){
    long long n,q;
    cin>>n>>q;
    long long arr[n+1];
    for(auto &x : arr){
        x = 0;
    }

    while(q--){
        long long t;
        cin>>t;
        if(t==0){
            long long l,r,x;
            cin>>l>>r>>x;
            if(x==0) {
                arr[l] = arr[r] = -1;
            }
            else if(x==1){
                arr[l] = arr[r]  = 1;
            }
        }
        else if(t==1){
            long long j;
            cin>>j;
            if(arr[j]==1)
            cout<<"YES"<<endl;
            else if(arr[j]==-1)
            cout<<"NO"<<endl;
            else
            cout<<"N/A"<<endl;
        }
    }
}