/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

// Kth Smallest/Rank using Segment Tree for fixed range values
// class KthSmallestSegmentTree{public:vector<int>t;int n,o;KthSmallestSegmentTree(int l,int r){o=-l;n=r-l+1;t.resize(4*n);}
// void add(int x,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(l==r){t[i]++;return;}int m=(l+r)/2;(x+o<=m)?add(x,i*2,l,m):add(x,i*2+1,m+1,r);t[i]=t[i*2]+t[i*2+1];}
// void rem(int x,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(l==r){if(t[i])t[i]--;return;}int m=(l+r)/2;(x+o<=m)?rem(x,i*2,l,m):rem(x,i*2+1,m+1,r);t[i]=t[i*2]+t[i*2+1];}
// int kth(int k,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(l==r)return l-o;int m=(l+r)/2;return(k<=t[i*2])?kth(k,i*2,l,m):kth(k-t[i*2],i*2+1,m+1,r);}
// int rank(int x,int i=1,int l=0,int r=-1){if(r<0)r=n-1;if(x+o<l)return 0;if(r<x+o)return t[i];int m=(l+r)/2;return rank(x,i*2,l,m)+rank(x,i*2+1,m+1,r);}
// };

class KthSmallestSegmentTree{public:const long long MIN_VAL=-1e9,MAX_VAL=1e9;struct Node{int count=0;Node*l=nullptr,*r=nullptr;};Node*root=new Node();
void add(int v){add_recursive(root,MIN_VAL,MAX_VAL,v);} void remove(int v){remove_recursive(root,MIN_VAL,MAX_VAL,v);} int findkth(int k){int t=root->count;if(t==0)throw std::runtime_error("E");k=k>t?t:k<1?1:k;return findkth_recursive(root,MIN_VAL,MAX_VAL,k);} int rankOf(int v){return rank_recursive(root,MIN_VAL,MAX_VAL,v-1);}
void add_recursive(Node*&curr,long long l,long long r,int v){if(!curr)curr=new Node();curr->count++;if(l==r)return;long long m=l+(r-l)/2;if(v<=m)add_recursive(curr->l,l,m,v);else add_recursive(curr->r,m+1,r,v);}
void remove_recursive(Node*curr,long long l,long long r,int v){if(!curr)return;curr->count--;if(l==r)return;long long m=l+(r-l)/2;if(v<=m)remove_recursive(curr->l,l,m,v);else remove_recursive(curr->r,m+1,r,v);}
int findkth_recursive(Node*curr,long long l,long long r,int k){if(l==r)return l;int lc=curr->l?curr->l->count:0;if(k<=lc)return findkth_recursive(curr->l,l,l+(r-l)/2,k);return findkth_recursive(curr->r,l+(r-l)/2+1,r,k-lc);} int rank_recursive(Node*curr,long long l,long long r,int qr){if(!curr||qr<l)return 0;if(r<=qr)return curr->count;long long m=l+(r-l)/2;return rank_recursive(curr->l,l,m,qr)+rank_recursive(curr->r,m+1,r,qr);}};

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(k),b(k);
    inparr(a,k);
    inparr(b,k);
    map<pair<int,int>,int> both;
    map<int,int> boys,girls;
    int ans = 0;
    for(int i=0;i<k;i++){
        // cout<<i<<" "<<boys[a[i]]<<" "<<girls[b[i]]<<endl;
        ans += (i-boys[a[i]]-girls[b[i]]+both[{a[i],b[i]}]);
        boys[a[i]]++;
        girls[b[i]]++;
        both[{a[i],b[i]}]++;
    }
    cout<<ans<<endl;
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;cin>>t;while(t--)solve();return 0;}