/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
 
const int maxN = 1000001;
int spf[maxN];
 
// Kth Smallest/Rank using Segment Tree for fixed range values
class KthSmallestSegmentTree{public:const long long MIN_VAL=-1e9,MAX_VAL=1e9;struct Node{int count=0;Node*l=nullptr,*r=nullptr;};Node*root=new Node();
void add(int v){add_recursive(root,MIN_VAL,MAX_VAL,v);} void remove(int v){remove_recursive(root,MIN_VAL,MAX_VAL,v);} int findkth(int k){int t=root->count;if(t==0)throw runtime_error("E");k=k>t?t:k<1?1:k;return findkth_recursive(root,MIN_VAL,MAX_VAL,k);} int rankOf(int v){return rank_recursive(root,MIN_VAL,MAX_VAL,v-1);}
void add_recursive(Node*&curr,long long l,long long r,int v){if(!curr)curr=new Node();curr->count++;if(l==r)return;long long m=l+(r-l)/2;if(v<=m)add_recursive(curr->l,l,m,v);else add_recursive(curr->r,m+1,r,v);}
void remove_recursive(Node*curr,long long l,long long r,int v){if(!curr)return;curr->count--;if(l==r)return;long long m=l+(r-l)/2;if(v<=m)remove_recursive(curr->l,l,m,v);else remove_recursive(curr->r,m+1,r,v);}
int findkth_recursive(Node*curr,long long l,long long r,int k){if(l==r)return l;int lc=curr->l?curr->l->count:0;if(k<=lc)return findkth_recursive(curr->l,l,l+(r-l)/2,k);return findkth_recursive(curr->r,l+(r-l)/2+1,r,k-lc);} int rank_recursive(Node*curr,long long l,long long r,int qr){if(!curr||qr<l)return 0;if(r<=qr)return curr->count;long long m=l+(r-l)/2;return rank_recursive(curr->l,l,m,qr)+rank_recursive(curr->r,m+1,r,qr);}};
 
void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}
 
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    inparr(v,n);
 
 
    vector<vector<int>> adj(n);
    for(int i=0;i<n;i++){
        if(i-v[i]>=0){
            adj[i-v[i]].push_back(i);
        }
        if(i+v[i]<n){
            adj[i+v[i]].push_back(i);
        }
    }
 
    vector<int> vis(n,0), evendist(n,1e9), odddist(n,1e9);
    queue<int> q;
    //even bfs
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            evendist[i] = 0;
            q.push(i);
        }
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
 
        if(vis[node])   continue;
        vis[node] = 1;
 
        for(int adjnode:adj[node]){
            if(!vis[adjnode] && evendist[adjnode]>evendist[node]+1){
                evendist[adjnode] = 1+evendist[node];
                q.push(adjnode);
            }
        }
    }
 
    vis.assign(n,0);
    //odd bfs
    for(int i=0;i<n;i++){
        if(v[i]%2){
            odddist[i] = 0;
            q.push(i);
        }
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
 
        if(vis[node])   continue;
        vis[node] = 1;
 
        for(int adjnode:adj[node]){
            if(!vis[adjnode] && odddist[adjnode]>odddist[node]+1){
                odddist[adjnode] = 1+odddist[node];
                q.push(adjnode);
            }
        }
    }
 
    
 
    for(int i=0;i<n;i++){
        if(v[i]%2){
            if(evendist[i]==1e9){
                cout<<-1<<" ";
            }else{
                cout<<evendist[i]<<" ";
            }
        }else{
            if(odddist[i]==1e9){
                cout<<-1<<" ";
            }else{
                cout<<odddist[i]<<" ";
            }
        }
    }
    
}
 
int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;while(t--)solve();return 0;}