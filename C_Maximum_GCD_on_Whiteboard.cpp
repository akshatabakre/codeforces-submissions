/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    inparr(v,n);
    sort(v.begin(),v.end());
    map<int,int> f;
    for(int i:v){
        f[i]++;
    }
    int ans = 1;
    for(int g=2;g<=n;g++){
        int cnt = lower_bound(v.begin(),v.end(),4*g)-v.begin();
        if(cnt-f[g]-f[2*g]-f[3*g]<=k){
            ans = g;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;cin>>t;while(t--)solve();return 0;}