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
        sort(v.rbegin(),v.rend());
        if(count(v.begin(),v.end(),v[0])==n){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            cout<<v[0]<<" "<<v[n-1]<<" ";
            for(int i=1;i<n-1;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}