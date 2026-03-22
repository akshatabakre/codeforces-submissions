#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int c = 1;
        int maxc = 1;
        for(int i=1;i<n;i++){
            if(abs(v[i]-v[i-1])<=k){
                c++;
            }else{
                c=1;
            }
            maxc = max(c,maxc);
        }
        cout<<n-maxc<<endl;
    }

    return 0;
}