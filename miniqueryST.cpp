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

class SegTree{
    vector<int> arr;
    int n;
    vector<int> Tree;
    public:
    SegTree(vector<int>& arr,int n){
        this->n = n;
        this->arr = arr;
        Tree.resize(4*n);
        buildTree(1,0,n-1);
    }
    void buildTree(int index,int l,int r){
        if(l==r){
            Tree[index] = arr[l];
            return;
        }
        int mid = (l+r)/2;
        buildTree(2*index,l,mid);
        buildTree(2*index + 1,mid+1,r);
        Tree[index] = min(Tree[2*index],Tree[2*index + 1]);
    }
    void update(int index,int l,int r,int pos,int val){
        if(pos<l || pos>r){
            return;
        }
        if(l==r){
            arr[pos] = val;
            Tree[index] = val;
            return;
        }
        int mid = (l+r)/2;
        update(2*index,l,mid,pos,val);
        update(2*index + 1,mid+1,r,pos,val);
        Tree[index] = min(Tree[2*index],Tree[2*index + 1]);
    }
    int query(int index,int l,int r,int lq,int rq){
        // l r  lq rq  l r
        if(r<lq || l>rq){
            return 1e9;
        }
        //lq l r rq
        if(l>=lq && r<=rq){
            return Tree[index];
        }
        int mid = (l+r)/2;
        return min(query(2*index,l,mid,lq,rq),query(2*index+1,mid+1,r,lq,rq));
    }
};
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    SegTree obj(v,n);
    vector<vector<int>> queries(q);
    for(int i=0;i<q;i++){
        int a,b,c;
        cin>>a>>b>>c;
        queries[i] = {a,b,c};
    }
    for(int i=0;i<q;i++){
        if(queries[i][0]==1){
            obj.update(1,0,n-1,queries[i][1]-1,queries[i][2]);
        }else{
            cout<<obj.query(1,0,n-1,queries[i][1]-1,queries[i][2]-1)<<endl;
        }
    }
}

int32_t main(){

    pre();
    solve();

    return 0;
}