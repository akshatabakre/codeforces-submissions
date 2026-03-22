/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

void solve(){
    int n0,n1;
    cin>>n0>>n1;
    if(n1<n0-1 || n1>2*n0+2){
        cout<<-1<<endl;
        return;
    }
    if(n1==n0-1){
        for(int i=0;i<n1;i++){
            cout<<01;
        }
        cout<<0;
    }else if(n1==n0){
        for(int i=0;i<n1;i++){
            cout<<10;
        }
    }else{
        if(n1==n0+1){
            for(int i=0;i<n1-1;i++){
                cout<<10;
            }
            cout<<1;
        }else{
            
        }
    }
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
// pre(); // Uncomment for Sieve
int t=1;while(t--)solve();return 0;}