#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int> f;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            f[x]++;
        }
        int pairs = 0;
        for(int i=1;i<(k+1)/2;i++){
            // cout<<i<<" "<<f[i]<<" "<<f[k-i]<<endl;
            pairs+=min(f[i],f[k-i]);
        }
        if(k%2==0){
            // cout<<k/2<<" "<<f[k/2]<<endl;
            pairs+=f[k/2]/2;
        }
        cout<<pairs<<endl;
    }

    return 0;
}