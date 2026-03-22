/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}
//dp[i][0] -> at ith level, low was last
//dp[i][1] -> -''- , high was last

void solve(){
    int n,ax,ay,bx,by;
    cin>>n>>ax>>ay>>bx>>by;
    vector<vector<int>> xy(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>xy[i][0];
    }
    for(int i=0;i<n;i++){
        cin>>xy[i][1];
    }
    vector<int> distx;
    distx.push_back(ax);
    for(int i=0;i<n;i++){
        if(distx.back()!=xy[i][0]){
            distx.push_back(xy[i][0]);
        }
    }
    if(distx.back()!=bx){
        distx.push_back(bx);
    }
    
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;cin>>t;while(t--)solve();return 0;}