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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool poss = false;
    for(int i=0;i<n-1;i++){
        if(abs(v[i]-v[i+1])<=1){
            cout<<0<<endl;
            return;
        }
        if(i && (v[i]-v[i-1])*(v[i+1]-v[i])<0){
            poss = true;
        }
    }
    if(poss){
        cout<<1<<endl;
        return;
    }
    cout<<-1<<endl;
    return;
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