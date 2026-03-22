#include<bits/stdc++.h>
using namespace std;
#define int long long

#define maxN 100000
int spf[1000100];
void pre(){
    for(int i=0;i<=maxN;i++){
        spf[i]=i;
    }
    for(int i=2;i<=maxN;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=maxN;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}

map<int,int> get_factor_map(int n){
    map<int,int> ans;
    while(n>1){
        ans[spf[n]]++;
        n/=spf[n];
    }
    return ans;
}
pair<int,int> reduceandcomp(int n,int k){
    int red = 1, comp = 1;
    map<int,int> primefact = get_factor_map(n);
    for(auto i:primefact){
        if(i.second%k!=0){
            red*=pow(i.first,i.second%k);
            comp*=pow(i.first,k-(i.second%k));
        }
    }
    return {red,comp};
}

int32_t main(){

    // int t;
    // cin>>t;
    // while(t--){
        
    // }

    pre();

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans = 0;
    map<int,int> freq;
    for(int i=0;i<n;i++){
        auto p = reduceandcomp(v[i],k);
        ans+=freq[p.second];
        freq[p.first]++;
    }
    cout<<ans<<endl;

    return 0;
}