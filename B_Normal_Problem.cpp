#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int n = a.length();
        string b = "";
        for(int i=0;i<n;i++){
            if(a[i]=='q')   b+='p';
            else if(a[i]=='p')   b+='q';
            else b+=a[i];
        }
        for(int i=0;i<n/2;i++){
            swap(b[i],b[n-i-1]);
        }
        cout<<b<<endl;
    }

    return 0;
}