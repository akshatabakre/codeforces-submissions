/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];


void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int sum = 0;
    int mini = 1e9;
    vector<int> v1(n),v2(m);
    for(int i=0;i<n;i++){
        cin>>v1[i];
        sum+=v1[i];
        mini = min(v1[i],mini);
    }
    int maxi = 0;
    for(int i=0;i<m;i++){
        cin>>v2[i];
        maxi = max(v2[i],maxi);
    }
    if(k%2){
        if(maxi<mini){
            cout<<sum<<endl;
        }else
        cout<<max(sum,sum-mini+maxi)<<endl;
    }else{
        cout<<sum<<endl;
    }
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;cin>>t;while(t--)solve();return 0;}