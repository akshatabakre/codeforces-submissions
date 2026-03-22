#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int changes = 0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1]){
                changes++;
            }
        }
        if(changes%2==0){
            cout<<s<<endl;
        }else{
            s[0] = (s[0]=='a')? 'b' : 'a';
            cout<<s<<endl;
        }
    }

    return 0;
}