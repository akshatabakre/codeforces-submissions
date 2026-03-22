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

class X{
    public:
    int XOR0,XOR1;
    vector<int> pref;
    X(vector<int>& v,string& s){
        XOR0 = 0;   XOR1 = 0;
        int n = v.size();
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                XOR1 = (XOR1^v[i]);
            }else{
                XOR0 = (XOR0^v[i]);
            }
        }
        pref.resize(v.size());
        pref[0] = v[0];
        for(int i=1;i<n;i++){
            pref[i] = (v[i]^pref[i-1]);
        }
    }
    void query1(int l,int r){
        int x = pref[r];
        if(l-1>=0){
            x = (x^pref[l-1]);
        }
        XOR0 = (XOR0^x);
        XOR1 = (XOR1^x);
    }
    int query2(int g){
        if(g){
            return XOR1;
        }
        return XOR0;
    }
};
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    inparr(v,n);
    string s;
    cin>>s;
    int q;
    cin>>q;
    vector<int> ans;
    X x(v,s);
    for(int i=0;i<q;i++){
        int type;
        cin>>type;
        if(type==1){
            int l,r;
            cin>>l>>r;
            x.query1(l-1,r-1);
        }else{
            int g;
            cin>>g;
            ans.push_back(x.query2(g));
        }
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;cin>>t;while(t--)solve();return 0;}