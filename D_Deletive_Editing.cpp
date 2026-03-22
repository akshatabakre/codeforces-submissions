#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int n=s.size(), m = t.size();
        map<char,int> mp;
        for(int i=0;i<m;i++){
            mp[t[i]]++;
        }
        int i = m-1;
        for(int j=n-1;j>=0;j--){
            if(i<0){
                break;
            }
            if(mp[s[j]]!=0){
                if(t[i]==s[j]){
                    i--;
                    mp[s[j]]--;
                }else{
                    break;
                }
            }
        }
        if(i<0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}