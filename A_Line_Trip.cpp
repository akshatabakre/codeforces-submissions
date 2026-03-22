#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int p = 0;
        int minvol = 0;
        for(int i=0;i<n;i++){
            minvol = max(v[i]-p,minvol);
            p = v[i];
        }
        minvol = max(2*(x-v[n-1]),minvol);
        cout<<minvol<<endl;
    }

    return 0;
}