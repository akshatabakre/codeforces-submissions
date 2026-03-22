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
        int ans = 0, mini = n;
        vector<int> vec;
        for(int i=0;i<n;i++){
            if(v[i]-i-1!=0){
                vec.push_back(abs(v[i]-i-1));
                mini = min(abs(v[i]-i-1),mini);
            }
        }
        if(mini==1){
            cout<<1<<endl;
        }else{
            int gcdn = vec[0];
            for(int i=1;i<vec.size();i++){
                gcdn = __gcd(gcdn,vec[i]);
            }
            cout<<gcdn<<endl;
        }
    }

    return 0;
}