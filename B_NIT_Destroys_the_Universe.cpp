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
        int ans = 0;
        int prev = 0;
        for(int i=0;i<n;i++){
            if(prev==0 && v[i]!=0){
                ans++;
            }
            prev = v[i];
        }
        if(ans==0 || ans==1){
            cout<<ans<<endl;
        }else{
            cout<<2<<endl;
        }
    }

    return 0;
}