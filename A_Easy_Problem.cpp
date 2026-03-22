#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 2*(n/2);
        if(n%2==0)  ans--;
        cout<<ans<<endl;
    }

    return 0;
}