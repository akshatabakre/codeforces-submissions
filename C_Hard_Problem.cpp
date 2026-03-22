#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int ans = 0,left = 0;
        if(a<=m){
            ans+=a;
            left+=(m-a);
        }else{
            ans+=m;
        }
        if(b<=m){
            ans+=b;
            left+=(m-b);
        }else{
            ans+=m;
        }
        if(c<=left){
            ans+=c;
        }else{
            ans+=left;
        }
        cout<<ans<<endl;
    }

    return 0;
}