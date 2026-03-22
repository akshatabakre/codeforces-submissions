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

void solve(){
    int n;
    cin >> n;
    vector<int> u(n),s(n);
    inparr(u, n);
    inparr(s, n);
    map<int,vector<int>> uniToStu;
    for(int i=0;i<n;i++){
        uniToStu[u[i]].push_back(s[i]);
    }
    for(auto it:uniToStu){
        vector<int> temp = it.second;
        sort(temp.rbegin(),temp.rend());
        for(int i=1;i<temp.size();i++){
            temp[i]+=temp[i-1];
        }
        uniToStu[it.first] = temp;
    }
    // for(auto it:uniToStu){
    //     cout<<it.first<<endl;
    //     for(int i:it.second){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int k=1;k<=n;k++){
    //     int sum = 0;
    //     for(auto it:uniToStu){
    //         int size = it.second.size();
    //         if(size<k){
    //             continue;
    //         }
    //         sum += it.second[size-1-(size%k)];
    //     }
    //     // cout << sum << " ";
    // }
    vector<int> totsum(n,0);
    for(auto it:uniToStu){
        for(int k=1;k<=min(n,(long long)it.second.size());k++){
            totsum[k-1] += it.second[it.second.size()-1-(it.second.size()%k)];
        }
    }
    for(int i=0;i<n;i++){
        cout << totsum[i] << " ";
    }
    cout<<endl;
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;cin>>t;while(t--)solve();return 0;}