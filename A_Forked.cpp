#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,xk,yk,xq,yq;
        cin>>a>>b;
        cin>>xk>>yk>>xq>>yq;
        int diffx = abs(xk-xq), diffy = abs(yk-yq);
        if(xk==xq){
            if(abs(yk-yq)==2*a || abs(yk-yq)==2*b){
                cout<<2<<endl;
            }else{
                cout<<0<<endl;
            }
        }else if(yk==yq){
            if(abs(xk-xq)==2*a || abs(xk-xq)==2*b){
                cout<<2<<endl;
            }else{
                cout<<0<<endl;
            }
        }else{
            if((diffx==2*a && diffy == 2*b)||(diffx==2*b && diffy==2*a)){
                cout<<1<<endl;
            }else if((diffx==a+b && diffy==a+b) || (diffx==abs(a-b) && diffy==abs(a-b))||(diffx==a+b && diffy==abs(a-b))||(diffx==abs(a-b) && diffy==a+b)){
                cout<<2<<endl;
            }else{
                cout<<0<<endl;
            }
        }
    }

    return 0;
}