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
        sort(v.begin(),v.end());
        int largcount =  count(v.begin(),v.end(),v[n-1]);
        if(largcount==n){
            cout<<-1<<endl;
        }else{
            cout<<n-largcount<<" "<<largcount<<endl;
            for(int i=0;i<n-largcount;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<largcount;i++){
                cout<<v[n-1]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}