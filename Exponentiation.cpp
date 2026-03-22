/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];
int mod = 1e9 + 7;

int binpow(int a,int b){
    if(b==0){
        return 1;

    }
    if(b&1){
        return ((a%mod)*binpow(a,b-1))%mod;
    }
    int temp = binpow(a,b/2)%mod;
    return (temp*temp)%mod;
}

void solve(){
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0){
        cout<<1<<endl;
        return;
    }
    cout<<binpow(a,b)%mod<<endl;
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;cin>>t;while(t--)solve();return 0;}