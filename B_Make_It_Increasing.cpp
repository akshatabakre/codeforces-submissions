#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans = 0;
        for(int i=n-2;i>=0;i--){
            while(v[i]>=v[i+1] && v[i]>0){
                v[i]/=2;
                ans++;
            }
            // cout<<i<<" ";
            // cout<<v[i]<<endl;
            if(v[i]==v[i+1]){
                ans = -1;
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}