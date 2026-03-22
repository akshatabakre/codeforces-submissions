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
// unordered_map<int,map<int,int>> dp;
// int maxbeauty(int ind,int prev,vector<int>& arr){
//     if(ind==arr.size()){
//         return 0;
//     }
//     if(prev!=-1 && dp[ind].find(prev)!=dp[ind].end()){
//         return dp[ind][prev];
//     }
//     int nottake = maxbeauty(ind+1,prev,arr);
//     int take = 0;
//     if(prev==-1 || ind-prev==arr[ind]-arr[prev]){
//         take = arr[ind] + maxbeauty(ind+1,ind,arr);
//     }
//     if(prev==-1){
//         return max(take,nottake);
//     }
//     return dp[ind][prev] = max(take,nottake);
// }
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    inparr(arr,n);
    // vector<vector<int>> dp(n,vector<int>(n,-1));
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i] = arr[i]-(i+1);
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[v[i]] += arr[i];
    }
    int maxi = 0;
    for(auto it:mp){
        maxi = max(it.second,maxi);
    }
    cout<<maxi<<endl;
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