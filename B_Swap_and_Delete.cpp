#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int ones = 0;
        string t = "";
        for(char ch:s){
            if(ch=='1'){
                ones++;
                t+='0';
            }else{
                t+='1';
            }
        }
        int zeros = n-ones;
        int i = 0;
        while(i<n){
            if(t[i]=='1'){
                ones--;
            }else{
                zeros--;
            }
            if(ones<0 || zeros<0){
                break;
            }
            i++;
        }
        cout<<n-i<<endl;
    }
    return 0;
}