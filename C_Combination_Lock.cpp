#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            int x = (2*i + 1)%n;
            if(x){
                cout<<x<<" ";
            }else{
                cout<<n<<" ";
            }
        }   cout<<endl;
    }
    return 0;
}