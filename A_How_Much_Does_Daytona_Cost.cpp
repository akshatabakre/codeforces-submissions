#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(count(v.begin(),v.end(),k)==0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }

    return 0;
}