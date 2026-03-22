#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // string s = to_string(n);
        int len = s.length();
        bool b1 = false, b2 = false;
        int s1 = len, s2 = len;
        reverse(s.begin(),s.end());
        int five = s.find('5'), zero = s.find('0');
        if(five!=string::npos){
            s1=five;
            for(int i=five+1;i<len;i++){
                if(s[i]=='2'||s[i]=='7'){
                    b1 = true;
                    break;
                }else{
                    s1++;
                }
            }
        }
        if(zero!=string::npos){
            s2 = zero;
            for(int i=zero+1;i<len;i++){
                if(s[i]=='0'||s[i]=='5'){
                    b2 = true;
                    break;
                }else{
                    s2++;
                }
            }
        }
        if(b1 && b2){
            cout<<min(s1,s2)<<endl;
        }else if(b1){
            cout<<s1<<endl;
        }else{
            cout<<s2<<endl;
        }
    }

    return 0;
}