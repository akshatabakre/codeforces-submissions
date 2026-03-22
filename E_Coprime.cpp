/*Template Author - Akshata*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int maxN = 1000001;
int spf[maxN];

void pre(){for(int i=0;i<maxN;i++)spf[i]=i;for(int i=2;i*i<maxN;i++)if(spf[i]==i)for(int j=i*i;j<maxN;j+=i)if(spf[j]==j)spf[j]=i;}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++)cin>>a[i];}

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    inparr(v,n);
    vector<int> primes(maxN+1,0);
    for(int i=0;i<n;i++){
        int x = v[i];
        while(x>1){
            int p = spf[x];
            primes[p]++;
            while(x%p==0){
                x/=p;
            }
        }
    }
    bool set = true;
    for(int i:primes){
        if(i>1){
            set = false;
            break;
        }
    }
    if(set){
        cout<<"pairwise coprime"<<endl;
        return;
    }
    int g = v[0];
    for(int i=1;i<n;i++){
        g = __gcd(v[i],g);
    }
    if(g==1){
        cout<<"setwise coprime"<<endl;
        return;
    }
    cout<<"not coprime"<<endl;
}

int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);
pre(); // Uncomment for Sieve
int t=1;while(t--)solve();return 0;}