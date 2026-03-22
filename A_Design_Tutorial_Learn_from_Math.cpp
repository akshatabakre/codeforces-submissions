/*Akshata's Template*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define maxN 1000000
int spf[1000001];
void pre(){
    //precomputing spf
    for(int i=0;i<=maxN;i++){spf[i] = i;}
    for(int i=2;i<=maxN;i++){if(spf[i]==i){for(int j=i*i;j<=maxN;j+=i){if(spf[j]==j)   spf[j] = i;}}}
}
void inparr(vector<int>&a,int n){for(int i=0;i<n;i++){cin>>a[i];}}

void solve(){
    int n;
    cin>>n;
    int i;
    for(i=4;i<n;i+=2){
        if(spf[n-i]!=n-i){
            //n-i is composite number
            break;
        }
    }
    cout<<i<<" "<<n-i<<endl;
}

int32_t main(){
    pre();
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }

    return 0;
}