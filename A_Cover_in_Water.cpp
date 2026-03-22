#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int maxempty = 0, currempty = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='.'){
                currempty++;
            }else{
                maxempty = max(currempty,maxempty);
                currempty = 0;
            }
        }
        maxempty = max(currempty,maxempty);
        if(maxempty<=2){
            cout<<count(s.begin(),s.end(),'.')<<endl;
        }else{
            cout<<2<<endl;
        }
    }
    return 0;
}