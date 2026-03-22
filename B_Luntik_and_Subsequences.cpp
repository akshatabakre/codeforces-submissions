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
        int ones = 0, zeroes = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0)     zeroes++;
            if(v[i]==1)     ones++;
        }
        if(ones==0) cout<<0<<endl;
        else{
            cout<<ones*(1LL<<zeroes)<<endl;
        }
    }

    return 0;
}