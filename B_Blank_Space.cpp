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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int currcount = 0,maxcount = 0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                currcount++;
                maxcount = max(currcount,maxcount);
            }else{
                currcount = 0;
            }
        }
        cout<<maxcount<<endl;
    }

    return 0;
}