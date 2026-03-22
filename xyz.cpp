#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            ans += (s[i]=='1')? 1 : 0;
        }
        cout<<ans<<endl;
    }

    return 0;
}