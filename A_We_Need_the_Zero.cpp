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
        int cxor = 0;
        for(int i=0;i<n;i++){
            cxor = v[i]^cxor;
        }
        if(cxor==0){
            cout<<0<<endl;
        }else{
            int x = 0;
            for(int i=0;i<n;i++){
                v[i] = v[i]^cxor;
                x = x^v[i];
            }
            if(x==0){
                cout<<cxor<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }

    return 0;
}