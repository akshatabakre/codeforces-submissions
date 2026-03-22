/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

// Kth Smallest/Rank using Segment Tree for fixed range values
class KthSmallestSegmentTree{public:vector<int>t;int n,o;KthSmallestSegmentTree(int l,int r){o=-l;n=r-l+1;t.resize(4*n);}
void add(int x,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(l==r){t[i]++;return;}int m=(l+r)/2;(x+o<=m)?add(x,i*2,l,m):add(x,i*2+1,m+1,r);t[i]=t[i*2]+t[i*2+1];}
void rem(int x,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(l==r){if(t[i])t[i]--;return;}int m=(l+r)/2;(x+o<=m)?rem(x,i*2,l,m):rem(x,i*2+1,m+1,r);t[i]=t[i*2]+t[i*2+1];}
int kth(int k,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(l==r)return l-o;int m=(l+r)/2;return(k<=t[i*2])?kth(k,i*2,l,m):kth(k-t[i*2],i*2+1,m+1,r);}
int rank(int x,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(x+o<l)return 0;if(r<x+o)return t[i];int m=(l+r)/2;return rank(x,i*2,l,m)+rank(x,i*2+1,m+1,r);}
};

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}
vector<int> facto;
int MOD = 1e9 + 7;
int maxNo = 200001;
vector<int> fact(maxNo);
void precompute(){
    fact[0] = 1;    fact[1] = 1;
    for(int i=2;i<maxNo;i++){
        fact[i] = (fact[i-1] * i) % MOD;
    }
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    
    inparr(a, n);
    int ans = 0;
    map<int,int> f;
    int AND = ~0LL;
    for (int i = 0; i < n; i++) {
        f[a[i]]++;
        AND &= a[i];
    }
    if(f[AND]<2){
        cout<<0<<endl;
    }else{
        int ans = (f[AND]*(f[AND]-1))%MOD;
        ans = (ans*fact[n-2])%MOD;
        cout<<ans<<endl;
    }
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
precompute();
int t=1;cin>>t;while(t--)solve();return 0;}