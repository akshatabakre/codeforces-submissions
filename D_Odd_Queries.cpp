#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> v(n+1);
        v[0] = 0;
        cin>>v[1];
        for(int i=2;i<=n;i++){
            int x;
            cin>>x;
            v[i] = x+v[i-1];
        }
        int s = v[n];
        while (q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            int newsum = s - (v[r]-v[l-1]) + (r-l+1)*k;
            if(newsum%2==0){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }
        
    }
    return 0;
}