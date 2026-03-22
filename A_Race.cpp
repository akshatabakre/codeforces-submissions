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

void solve(){
    int a, x, y;
    cin>>a>>x>>y;
    if(a>min(x,y) && a<max(x,y)){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
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