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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        int strong = 0;
        // int i=n-1;
        // while(v[i]>=x){
        //     strong++;
        //     i--;
        // }
        int len = 0;
        for(int i=0;i<n;i++){
            len++;
            if(v[i]*len>=x){
                strong++;
                len = 0;
            }
        }
        cout<<strong<<endl;
    }

    return 0;
}