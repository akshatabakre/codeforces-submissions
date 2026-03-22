#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p = 0;
        while(n%2==0){
            p++;
            n/=2;
        }
        int q = 0;
        while(n%3==0){
            q++;
            n/=3;
        }
        // cout<<p<<" "<<q<<endl;
        if(n==1 && p<=q){
            cout<<2*q - p<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}