#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    for(int i=0;i<m;i++){
        string a,b;
        cin>>a>>b;
        // mp[a] = )? a : b;
        if(a.length()<=b.length()){
            mp[a] = a;
        }else{
            mp[a] = b;
        }
    }
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        cout<<mp[a]<<" ";
    }

    return 0;
}