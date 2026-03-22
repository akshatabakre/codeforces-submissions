#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)    cin>>a[i];
        for(int i=0;i<n;i++)    cin>>b[i];
        int i=0,j=0;
        vector<int> v1,v2;
        v1.push_back(a[i++]);
        while(i<n && j<n){
            if(a[i]==v1.back()){
                v1.push_back(a[i++]);
            }else if(b[j]==v1.back()){
                v1.push_back(b[j++]);
            }else{
                v1.push_back(a[i++]);
            }
        }
        while(i<n){
            v1.push_back(a[i++]);
        }
        while(j<n){
            v1.push_back(b[j++]);
        }
        i=0,j=0;
        v2.push_back(b[j++]);
        while(i<n && j<n){
            if(a[i]==v2.back()){
                v2.push_back(a[i++]);
            }else if(b[j]==v2.back()){
                v2.push_back(b[j++]);
            }else{
                v2.push_back(b[j++]);
            }
        }
        while(i<n){
            v2.push_back(a[i++]);
        }
        while(j<n){
            v2.push_back(b[j++]);
        }
        int maxlen=0,len=1;
        for(int it=1;it<2*n;it++){
            if(v1[it]==v1[it-1]){
                len++;
            }else{
                maxlen = max(len,maxlen);
                len=1;
            }
        }
        maxlen = max(len,maxlen);
        len=1;
        // cout<<maxlen<<" m\n";
        for(int it=0;it<2*n;it++){
            if(v2[it]==v2[it-1]){
                len++;
            }else{
                maxlen = max(len,maxlen);
                len=1;
            }
        }
        maxlen = max(len,maxlen);
        // for(int i=0;i<2*n;i++)  cout<<v2[i]<<" ";
        // cout<<endl;
        cout<<maxlen<<endl;
    }

    return 0;
}