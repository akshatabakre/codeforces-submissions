#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> v;
        unordered_map<int,bool> m;
        for(int i=0;i<n;i++){
            if(m[a[i]]==false){
                v.push_back(a[i]);
                m[a[i]]=true;
            }
        }
        for(int i=1;i<=n;i++){
            if(m[i]==false){
                v.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}