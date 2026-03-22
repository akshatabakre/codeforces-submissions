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
        if(v[0]==1){
            v[0]++;
        }
        for(int i=1;i<n;i++){
            if(v[i]==1){
                if(v[i-1]==2){
                    v[i]+=2;
                }else{
                    v[i]++;
                }
            }else{
                if(v[i]%v[i-1]==0){
                    v[i]++;
                }
            }
        }
        for(int i=0;i<n;i++)    cout<<v[i]<<" ";
        cout<<endl;
    }

    return 0;
}