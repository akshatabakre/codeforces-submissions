#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int c,m,x;
        cin>>c>>m>>x;
        int s = 0, e = min(c,m);
        int sum = c+m+x;
        int ans = 0;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(3*mid<=sum){
                ans = mid;
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}