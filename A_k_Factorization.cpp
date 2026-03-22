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
    int n,k;
    cin>>n>>k;
    bool notposs = false;
    vector<int> ans;
    for(int i=1;i<k;i++){
        if(n==1){
            notposs = true;
            break;
        }
        ans.push_back(spf[n]);
        n/=spf[n];
    }
    if(n==1){
        notposs = true;
    }else{
        ans.push_back(n);
    }
    if(notposs){
        cout<<-1<<endl;
    }else{
        for(int i=0;i<k;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}

int32_t main(){

    pre();
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }

    return 0;
}