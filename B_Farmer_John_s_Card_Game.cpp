#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> ans(n);
        bool flag = true;
        for(int i=0;i<n;i++){
            vector<int> v(m);
            for(int j=0;j<m;j++){
                cin>>v[j];
                // cout<<v[j]<<" ";
            }
            // cout<<endl;
            if(m!=1){
                for(int j=1;j<n;j++){
                    if(v[j]%n != v[j-1]%n){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag){
                ans[v[0]%n] = i+1;
            }
        }
        if(flag==false){
            cout<<-1<<endl;
        }else{
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}