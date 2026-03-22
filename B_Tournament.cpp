
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
    int n,k,j;
    cin>>n>>k>>j;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x = v[j];
    set<int> st;
    bool flag = false;
    for(int i=n-1;i>=0;i--){
        st.insert(v[i]);
    }
    while(st.size()>k){
        st.erase(st.begin());
    }
    if(st.find(x)!=st.end()){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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