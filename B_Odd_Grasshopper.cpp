#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int x,j;
        cin>>x>>j;
        // int pos = x;
        // int i=1;
        // while(i<=j){
        //     if(pos%2==0){
        //         pos-=i;
        //     }else{
        //         pos+=i;
        //     }
        //     i++;
        // }
        if(x%2==0){
            if(j%4==0){
                cout<<x<<endl;
            }else if(j%4==2){
                cout<<(x+1)<<endl;
            }else if(j%4==1){
                cout<<(x-j)<<endl;
            }else{
                cout<<(x+j+1)<<endl;
            }
        }else{
            if(j%4==0){
                cout<<x<<endl;
            }else if(j%4==2){
                cout<<(x-1)<<endl;
            }else if(j%4==1){
                cout<<(x+j)<<endl;
            }else{
                cout<<(x-j-1)<<endl;
            }
        }
    }

    return 0;
}