#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x>=k*(k+1)/2 && x<=n*k - k*(k-1)/2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}