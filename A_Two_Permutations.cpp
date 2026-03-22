#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(n==a && n==b){
            cout<<"Yes\n";
        }else{
            if(a+b+1>=n){
                cout<<"No\n";
            }else{
                cout<<"Yes\n";
            }
        }
    }

    return 0;
}