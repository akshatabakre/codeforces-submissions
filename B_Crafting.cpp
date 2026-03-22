#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int smolind = -1;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                smolind = i;
                break;
            }
        }
        if(smolind==-1){
            cout<<"YES\n";
            continue;
        }
        bool poss = true;
        for(int i=smolind+1;i<n;i++){
            if(a[i]<b[i]){
                poss = false;
                break;
            }
        }
        if(!poss){
            cout<<"NO\n";
            continue;
        }
        int diff = b[smolind] - a[smolind];
        for(int i=0;i<n;i++){
            if(i!=smolind){
                if(a[i]-diff<b[i]){
                    poss = false;
                    break;
                }
            }
        }
        if(poss){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}