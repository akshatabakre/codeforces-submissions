#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)    cin>>a[i];
        for(int i=0;i<n;i++)    cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int d1 = 1, d2 = 1;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                d1++;
            }
            if(b[i]!=b[i-1]){
                d2++;
            }
        }
        if(d1>2 || d2>2 || (d1==2 && d2==2))    cout<<"YES\n";
        else                cout<<"NO\n";
    }

    return 0;
}