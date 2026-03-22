#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v(n,-1);
        if(k==1){
            for(int i=0;i<n;i++){
                v[i] = i+1;
            }
        }else{
            int mini = 1, suitind = -1;
            while(suitind+k<n){
                suitind+=k;
                v[suitind] = mini;
                // cout<<mini<<" on "<<suitind<<endl;
                mini++;
            }
            for(int i=0;i<n;i++){
                if(v[i]==-1){
                    v[i] = mini;
                    mini++;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}