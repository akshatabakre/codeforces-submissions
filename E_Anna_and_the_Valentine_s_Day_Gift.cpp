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
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int total = 0;
    vector<int> zero(n);
    for(int i=0;i<n;i++){
        string s= to_string(v[i]);
        total+=s.length();
        int z=s.length()-1;
        while(z>=0 && s[z]=='0'){
            z--;
        }
        zero[i] = s.length()-z-1;
    }
    int remove = 0;
    // cout<<zero[0]<<endl;
    sort(zero.begin(),zero.end());
    for(int i=n-1;i>=0;i-=2){
        remove+=zero[i];
    }
    // cout<<total<<" "<<remove<<endl;
    if(total-remove>=m+1){
        cout<<"Sasha"<<endl;
    }else{
        cout<<"Anna"<<endl;
    }
}

int32_t main(){

    // pre();
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}