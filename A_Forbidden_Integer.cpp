#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(k==1 && x==1){
            cout<<"NO\n";
        }else if(n%2==1 && k==2 && x==1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            if(x!=1){
                cout<<n<<endl;
                for(int i=0;i<n;i++){
                    cout<<1<<" ";
                }
                cout<<endl;
            }else{
                //x=1
                if(n%2==0){
                    cout<<n/2<<endl;
                    for(int i=0;i<n/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }else{
                    cout<<(n-3)/2 +1<<endl;
                    cout<<3<<" ";
                    for(int i=0;i<(n-3)/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
            }
        }
    }

    return 0;
}