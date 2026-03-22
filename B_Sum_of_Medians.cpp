#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n*k);
        for(int i=0;i<n*k;i++){
            cin>>v[i];
        }
        int x = (n+1)/2;
        int i = 0;
        for(int j=1;j<x;j++){
            i+=k;
        }
        int sum = 0;
        while(i<n*k){
            sum+=v[i];
            i+=(n-x+1);
        }
        cout<<sum<<endl;
    }

    return 0;
}