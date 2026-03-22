#include<bits/stdc++.h>
using namespace std;
#define int long long

//PROBLEM
int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int minigcd = INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int x = __gcd(v[i],v[j]);
                minigcd = min(x,minigcd);
            }
        }
        if(minigcd<=2){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }

    return 0;
}