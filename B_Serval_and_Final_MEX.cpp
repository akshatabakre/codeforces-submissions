#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        cin >> v[i];

        bool has0 = false;
        for(int i=0;i<n-2;i++){
            if(!v[i]){
                has0 = true;
                break;
            }
        }
        // if(has0){
        //     if(v[n-1]==0 || v[n-2]==0){
                
        //     }else{
        //         cout<<2<<endl;
        //         cout<<1<<" "<<n-2<<endl;
        //         cout<<1<<" "<<3<<endl;
        //     }
        // }else{
        //     cout<<1<<endl;
        //     cout<<1<<" "<<n<<endl;
        // }
        if(v[n-1]==0 || v[n-2]==0){
            if(has0){
                cout<<3<<endl;
                cout<<1<<" "<<n-2<<endl;
                cout<<2<<" "<<3<<endl;
                cout<<1<<" "<<2<<endl;
            }else{
                cout<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<1<<" "<<n-1<<endl;
            }
        }else{
            if(has0){
                cout<<2<<endl;
                cout<<1<<" "<<n-2<<endl;
                cout<<1<<" "<<3<<endl;
            }else{
                cout<<1<<endl;
                cout<<1<<" "<<n<<endl;
            }
        }
    }

    return 0;
}