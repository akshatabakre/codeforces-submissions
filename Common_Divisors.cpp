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
    int maxi = 0;
    unordered_map<int,int> f;
    for(int i:v){
        maxi = max(i,maxi);
        f[i]++;
    }
    int ans = 1;
    for(int i=maxi;i>=2;i--){
        int cnt = 0;
        for(int j=i;j<=maxi;j+=i){
            if(f[j]!=0){
                cnt+=f[j];
            }
            if(cnt>=2){
                ans = i;
                break;
            }
        }
        if(ans!=1){
            break;
        }
        
    }
    cout<<ans<<endl;
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;while(t--)solve();return 0;}