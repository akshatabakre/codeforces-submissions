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
        int dist = 1;
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
            if(v[i]!=v[i-1]){
                dist++;
            }
        }
        if(dist==1){
            cout<<"Yes\n";
        }else if(dist==2){
            if(count(v.begin(),v.end(),v[0])==n/2 || count(v.begin(),v.end(),v[n-1])==n/2){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }else{
            cout<<"No\n";
        }
    }

    return 0;
}