#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        bool flag = false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(m.find(x)==m.end()){
                m[x] = i;
            }else{
                if(i-m[x]>1){
                    flag = true;
                }
            }
        }
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}