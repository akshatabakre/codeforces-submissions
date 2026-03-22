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
        // int mini = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>v[i];
            // mini = min(v[i],mini);
        }
        int ans = v[0];
        for(int i=1;i<n;i++){
            ans = (ans & v[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}