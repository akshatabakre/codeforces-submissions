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
    vector<vector<int>> day_score(m);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(m-a>=0)
            day_score[m-a].push_back(b);
    }
    int ans = 0;
    priority_queue<int> pq;
    for(int i=m-1;i>=0;i--){
        for(int j:day_score[i]){
            pq.push(j);
        }
        if(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
    }
    cout<<ans;
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;while(t--)solve();return 0;}