#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
    int t;
    cin>>t;
    while(t--)
{
    int n,m;
    cin>>n>>m;
    int ans = 0;
    bool count = true;
    while(n--){
        string s;
        cin>>s;
        if(count){
            if(s.length()<=m){
                ans++;
                m-=s.length();
            }else{
                count = false;
            }
            if(m<=0){
                count = false;
            }
        }
    }
    cout<<ans<<endl;
}

    return 0;
}