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
        for(int i=0;i<n;i++)    cin>>v[i];
        int index = -1;
        for(int i=1;i<n-1;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]){
                index = i;
                break;
            }
        }
        if(index==-1) cout<<"NO\n";
        else cout<<"YES\n"<<index<<" "<<index+1<<" "<<index+2<<"\n";
    }

    return 0;
}