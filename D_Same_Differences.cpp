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
        map<int,int> f;
        for(int i=0;i<n;i++){
            cin>>v[i];
            f[v[i]-i]++;
        }
        int pairs = 0;
        for(auto i:f){
            pairs+=(i.second*(i.second-1)/2);
        }
        cout<< pairs<<endl;
    }

    return 0;
}