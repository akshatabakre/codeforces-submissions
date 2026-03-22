#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int sum = b;
        // if(b>=a){

        // }
        vector<int> tools(n);
        for(int i=0;i<n;i++){
            cin>>tools[i];
            sum+=min(a-1,tools[i]);
        }
        cout<<sum<<endl;
    }

    return 0;
}