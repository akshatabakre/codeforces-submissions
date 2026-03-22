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

bool check(int k,vector<vector<int>>& v){
    int n = v.size();
    pair<int,int> range = {0,0};
    for(int i=0;i<n;i++){
        range.first -= k;
        range.second += k;
        if(range.second<v[i][0] || range.first>v[i][1]){
            return false;
        }
        range.first = max(v[i][0],range.first);
        range.second = min(v[i][1],range.second);
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v[i] = {x,y};
    }
    //binary search on answer
    int ans = 0;
    int s = 0, e = 1e9;
    while(s<=e){
        int m = s+(e-s)/2;
        if(check(m,v)){
            ans = m;
            e = m-1;
        }else{
            s = m+1;
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