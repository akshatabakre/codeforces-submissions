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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int num = count(v.begin(),v.end(),2);
        if(num==0){
            cout<<1<<endl;
        }else if(num%2==1){
            cout<<-1<<endl;
        }else{
            int c2 = 0;
            for(int i=0;i<v.size();i++){
                if(v[i]==2){
                    c2++;
                }
                if(c2==num/2){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}