/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

int mod = 1e9 + 7;

int binpow(int b,int e,int mod){
    if(e==0)    return 1;
    if(e%2){
        return ((b%mod)*binpow(b,e-1,mod))%mod;
    }
    int temp = binpow(b,e/2,mod);
    return (temp*temp)%mod;
}
int modinv(int a,int mod){
    return binpow(a,mod-2,mod);
}
void solve(){
    int n;
    cin>>n;
    map<int,int> primes;
    for(int i=0;i<n;i++){
        int p,x;
        cin>>p>>x;
        primes[p] = x;
    }
    int div = 1, divexp = 1;
    int sum = 1, prod = 1;
    int mod = 1e9+7, modexp = 2*(mod-1);
    for(auto it:primes){
        int p = it.first;
        div = (div*(1+primes[p]))%mod;
        divexp = (divexp*(1+primes[p]))%modexp;
    }
    for(auto it:primes){
        int p = it.first;
        int x = primes[p];
        int a = (binpow(p,x+1,mod)-1+mod)%mod;
        a = (a*modinv(p-1,mod))%mod;
        int exp = (x*divexp)%modexp;
        exp/=2;
        int b = binpow(p,exp,mod);
        sum = (sum*a)%mod;
        prod = (prod*b)%mod;
    }
    cout<<div<<" "<<sum<<" "<<prod<<endl;
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;while(t--)solve();return 0;}