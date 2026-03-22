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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool nondec = true;
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]){
                nondec = false;
                break;
            }
        }
        if(nondec){
            cout<<"YES\n";
            continue;
        }
        if(v[0]>v[1]){
            cout<<"NO\n";
        }else{
            bool flag = true;
            int prev = v[0];
            for(int i=1;i<n;i++){
                if(v[i]>=prev){
                    prev = v[i]-prev;
                }else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }

    return 0;
}