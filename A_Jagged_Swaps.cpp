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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(v[0]==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}