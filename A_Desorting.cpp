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
        int a=INT_MAX,b=INT_MIN;
        bool sorted = true;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                sorted = false;
                break;
            }
            if(v[i+1]-v[i]<a-b){
                a = v[i+1];
                b = v[i];
            }
        }
        if(!sorted){
            cout<<0<<endl;
        }else{
            
            cout<<((a-b)/2)+1<<endl;
        }
    }

    return 0;
}