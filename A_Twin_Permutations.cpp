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
        int sum = 1+n;
        for(int i=0;i<n;i++){
            cout<<sum-v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}