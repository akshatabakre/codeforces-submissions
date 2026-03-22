#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,m1,m2;
        cin>>n>>m1>>m2;
        map<pair<int,int>,int> mp1;
        map<pair<int,int>,int> mp2;
        pair<int,int> p;
        for(int i=0;i<m1;i++){
            int x,y;
            cin>>x>>y;
            p.first = x;
            p.second = y;
            mp1[p]++;
        }
        for(int i=0;i<m2;i++){
            int x,y;
            cin>>x>>y;
            p.first = x;
            p.second = y;
            mp2[p]++;
        }
        int ans = 0;
        for(auto i:mp1){
            if(mp2[i.first]==0){
                ans++;
            }
        }
        for(auto i:mp2){
            if(mp1[i.first]==0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}