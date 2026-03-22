/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    inparr(v,n);
    vector<int> s = v;
    sort(s.begin(),s.end());
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = max(abs(v[i]-s[i]),ans);
    }
    if(ans==0)  ans=-1;
    cout<<ans<<endl;
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;cin>>t;while(t--)solve();return 0;}