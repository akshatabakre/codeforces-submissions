#include<bits/stdc++.h>
using namespace std;
#define int long long


int maxsum(int i,int r,vector<int>& v,int k,vector<vector<int>>& dp){
    if(i==v.size()-r){
        return 0;
    }
    if(i>v.size()-r){
        return -1e9;
    }
    if(dp[i][r]!=-1){
        return dp[i][r];
    }
    //eat, take, do nothing
    int take = v[i] + maxsum(i+1,r+k,v,k,dp);
    int eat = 0;
    if(r>0)
        eat = maxsum(i+1,r-1,v,k,dp);
    int nothing = maxsum(i+1,r,v,k,dp);
    return dp[i][r] = max(take,max(eat,nothing));
}
int32_t main(){

    //dp
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)    cin>>v[i];
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        // cout<<maxsum(0,0,v,k,dp)<<endl;
        //base case
        for(int r=0;r<=n;r++){
            dp[n-r][r] = 0;
        }
        for(int r=0;r<=n;r++){
            for(int i=r+1;i<=n;i++){
                dp[i][r] = -1e9;
            }
        }
        for(int r=0;r<=n;r++){
            for(int i=n-r-1;i>=0;i--){
                int eat = 0;
                if(r>0){
                    eat = dp[i+1][r-1];
                }
                int take = v[i] + dp[i+1][r+k];
                int noth = dp[i+1][r];
                dp[i][r] = max(eat,max(take,noth));
            }
        }
        cout<<dp[0][0]<<endl;
    }

    return 0;
}