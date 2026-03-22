/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define maxN 1000000
int spf[1000001];
void pre(){
    for(int i=0;i<=maxN;i++){spf[i] = i;}
    for(int i=2;i<=maxN;i++){if(spf[i]==i){for(int j=i*i;j<=maxN;j+=i){if(spf[j]==j)   spf[j] = i;}}}}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++){cin>>a[i];}}

bool check(int t,vector<int>& v,int n,int m){
    int timeleft = 0, tasksleft = 0;
    for(int i=1;i<=n;i++){
        if(v[i]>=t){
            tasksleft += v[i]-t;
        }else{
            timeleft += (t-v[i])/2;
        }
    }
    return (timeleft>=tasksleft);
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n+1,0);
    for(int i=0;i<m;i++){
        int x;  cin>>x;
        v[x]++;
    }
    int s = 1, e = 2*m;
    int ans = e;
    while(s<=e){
        int mid = (s+e)/2;
        if(check(mid,v,n,m)){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){

    pre();
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}