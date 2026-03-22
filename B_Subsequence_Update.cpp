#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> v(n);
        for(int i=0;i<n;i++)    cin>>v[i];
        vector<int> v1, v2;//0 to r, l to n
        for(int i=0;i<n;i++){
            if(i<r){
                v1.push_back(v[i]);
            }
            if(i>=l-1){
                v2.push_back(v[i]);
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        // for(int i=0;i<v1.size();i++){
        //     cout<<v1[i]<<" ";
        // }   cout<<endl;
        // for(int i=0;i<v2.size();i++){
        //     cout<<v2[i]<<" ";
        // }   cout<<endl;
        int minsum = 1e9;
        int len = r-l+1;
        int s1 = 0, s2 = 0;
        for(int i=0;i<len;i++){
            s1+=v1[i];
            s2+=v2[i];
        }
        // cout<<s1<<" "<<s2<<endl;
        minsum = min(s1,s2);
        cout<<minsum<<endl;
    }

    return 0;
}