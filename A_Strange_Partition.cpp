#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        int sum = 0, maxbeauty=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
            maxbeauty+=(v[i]+x-1)/x;
        }
        cout<<(sum+x-1)/x<<" "<<maxbeauty<<endl;
    }
    return 0;
}