#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0;
        int k = 10;
        while(n>k){
            ans+=9;
            k*=10;
        }
        k/=10;
        ans+=n/k;
        cout<<ans<<endl;
    }

    return 0;
}