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

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    inparr(v,n);
    sort(v.begin(),v.end());
    if(k>2){
        cout<<0<<endl;
        return;
    }
    int mini = 1e18, m =v[n-1];
    for(int i=0;i<n-1;i++){
        m = min(v[i],m);
        mini = min(abs(v[i]-v[i+1]),mini);
    }
    if(k==0){
        cout<<m<<endl;
    }else if(k==1){
        cout<<min(mini,m)<<endl;
    }else{
        int mindiff = mini;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int diff = abs(v[i]-v[j]);
                mindiff = min(mindiff,diff);
                auto it = lower_bound(v.begin(),v.end(),diff);
                if(it!=v.end()){
                    mindiff = min(mindiff,abs(*it - diff));
                }
                if(it!=v.begin()){
                    it--;
                    mindiff = min(mindiff,abs(*it-diff));
                }
            }
        }
        cout<<mindiff<<endl;
    }
}

int32_t main(){

    pre();
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}