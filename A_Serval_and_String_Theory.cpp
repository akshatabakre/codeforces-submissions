#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(s.length()==1){
            cout<<"NO\n";
            continue;
        }
        string t = s;
        reverse(t.begin(),t.end());
        bool lexsmall = false;
        bool lexlarge = false;
        for(int i=0;i<n;i++){
            if(s[i]<t[i]){
                lexsmall = true;
                break;
            }else if(s[i]>s[n-i-1]){
                lexlarge = true;
                break;
            }
        }
        if(lexsmall){
            cout<<"YES\n";
        }else if(lexlarge){
            //lex large
            if(k>=1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            //equal pura
            if(count(s.begin(),s.end(),s[0])<s.length() && k>0){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }

    return 0;
}