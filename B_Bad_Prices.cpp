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
        for(int i=0;i<n;i++)    cin>>v[i];
        int mini = v[n-1];
        int ans = 0;
        for(int i=n-2;i>=0;i--){
            mini = min(mini,v[i]);
            if(mini!=v[i]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}