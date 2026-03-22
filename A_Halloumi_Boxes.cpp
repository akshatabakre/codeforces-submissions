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
        vector<int> a(n);
        a = v;
        sort(a.begin(),a.end());
        if(a!=v && k==1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }

    return 0;
}