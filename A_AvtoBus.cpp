#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini = 0,maxi=0;
        if(n%2==1 || n==2){
            cout<<-1<<endl;
        }else{
            int m=n;
            while(m%6!=0){
                mini++;
                m-=4;
            }
            mini+=m/6;
            m=n;
            while(m%4!=0){
                maxi++;
                m-=6;
            }
            maxi+=m/4;
        cout<<mini<<" "<<maxi<<endl;
        }
    }

    return 0;
}