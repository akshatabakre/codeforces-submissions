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
        int maxin = -1, maxi = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>maxi){
                maxi = v[i];
                maxin = i;
            }
        }
        if(k==1 && (maxin!=0 && maxin!=n-1)){
            cout<<maxi+max(v[0],v[n-1])<<endl;
        }else{
            sort(v.rbegin(),v.rend());
            int sum = 0;
            for(int i=0;i<=k;i++){
                sum+=v[i];
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}