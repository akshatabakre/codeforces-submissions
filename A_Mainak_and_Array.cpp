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
        int mini = 1e9, maxi = 0;
        // int minind = -1, maxind = -1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            // if(maxi<v[i]){
            //     maxi = v[i];
            //     maxind = i;
            // }
            // if(mini>v[i]){
            //     mini = v[i];
            //     minind = i;
            // }
            mini = min(mini, v[i]);
            maxi = max(maxi, v[i]);
        }
        int maxdiff = 0;
        for(int i=0;i<n-1;i++){
            maxdiff = max(maxdiff, v[i]-v[i+1]);
        }
        maxdiff = max(v[n-1]-v[0],maxdiff);
        maxdiff = max(maxi-v[0],max(v[n-1]-mini,maxdiff));
        cout<<maxdiff<<endl;
    }

    return 0;
}