/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

// Kth Smallest/Rank using Segment Tree for fixed range values
class KthSmallestSegmentTree{public:vector<int>t;int n,o;KthSmallestSegmentTree(int l,int r){o=-l;n=r-l+1;t.resize(4*n);}
void add(int x,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(l==r){t[i]++;return;}int m=(l+r)/2;(x+o<=m)?add(x,i*2,l,m):add(x,i*2+1,m+1,r);t[i]=t[i*2]+t[i*2+1];}
void rem(int x,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(l==r){if(t[i])t[i]--;return;}int m=(l+r)/2;(x+o<=m)?rem(x,i*2,l,m):rem(x,i*2+1,m+1,r);t[i]=t[i*2]+t[i*2+1];}
int kth(int k,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(l==r)return l-o;int m=(l+r)/2;return(k<=t[i*2])?kth(k,i*2,l,m):kth(k-t[i*2],i*2+1,m+1,r);}
int rank(int x,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(x+o<l)return 0;if(r<x+o)return t[i];int m=(l+r)/2;return rank(x,i*2,l,m)+rank(x,i*2+1,m+1,r);}
};

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

int maxheight(int ind,int prev,vector<int>& a,vector<int>& b,int n,vector<vector<int>>& dp){
    if(ind==n){
        return 0;
    }
    if(prev!=-1 && dp[ind][prev]!=-1){
        return dp[ind][prev];
    }
    int op1 = 0, op2 = 0, leave = maxheight(ind+1,prev,a,b,n,dp);
    if(prev!=0){
        op1 = a[ind] + maxheight(ind+1,0,a,b,n,dp);
    }
    if(prev!=1){
        op2 = b[ind] + maxheight(ind+1,1,a,b,n,dp);
    }
    if(prev==-1){
        return max({op1,op2,leave});
    }
    return dp[ind][prev] = max({op1,op2,leave});
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    inparr(a,n);    inparr(b,n);
    vector<vector<int>> dp(n,vector<int>(2,-1));
    cout<<maxheight(0,-1,a,b,n,dp);
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;;while(t--)solve();return 0;}