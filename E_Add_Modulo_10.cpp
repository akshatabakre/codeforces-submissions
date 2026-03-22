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
    vector<int> a(n);
    inparr(a, n);
    int term = 0, cycl = 0;
    for(int i=0;i<n;i++){
        if(a[i]%10==0||a[i]%10==5){
            term++;
        }else{
            cycl++;
        }
    }
    if(term && cycl){
        cout << "No" << endl;
    }else{
        if(term){
        
            for(int i=0;i<n;i++){
                if(a[i]%10){
                    a[i] = a[i] + 5;
                }
            }
            int yes = 1;
            for(int i=1;i<n;i++){
                if(a[i]!=a[0]){
                    yes = 0;
                    break;
                }
            }
            if(yes){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }else{
            for(int i=0;i<n;i++){
                while(a[i]%10!=2){
                    a[i] = a[i] + (a[i]%10);
                }
            }
            int yes = 1;
            for(int i=1;i<n;i++){
                if(abs(a[i]-a[0])%20){
                    yes = 0;
                    break;
                }
            }
            if(yes){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;cin>>t;while(t--)solve();return 0;}