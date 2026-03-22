/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    inparr(v,n);
    vector<int> prime(maxN+1,0);
    for(int i=0;i<n;i++){
        int x = v[i];
        while(x>1){
            int p = spf[x];
            prime[p] = 1;
            while(x%p==0){
                x/=p;
            }
        }
    }
    vector<int> ans;
    for(int i=1;i<=m;i++){
        int x = i;
        bool valid = true;
        while(x>1){
            int p = spf[x];
            if(prime[p]){
                valid = false;
                break;
            }
            while(x%p==0){
                x/=p;
            }
        }
        if(valid){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for(int i:ans){
        cout<<i<<endl;
    }
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
pre(); // Uncomment for Sieve
int t=1;while(t--)solve();return 0;}