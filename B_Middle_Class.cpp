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
        for(int i=0;i<n;i++)
            cin>>v[i];
        int excess = 0, maxi = 0;
        sort(v.begin(),v.end());
        for(int i=n-1;i>=0;i--){
            if(v[i]>=x){
                maxi++;
                excess += v[i]-x;
            }else{
                if(excess>=x-v[i]){
                    maxi++;
                    excess -= (x-v[i]);
                }
            }
        }
        cout<<maxi<<endl;
    }

    return 0;
}