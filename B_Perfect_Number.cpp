#include<bits/stdc++.h>
using namespace std;
#define int long long

int digitsum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int32_t main(){

    int k;
    cin>>k;
    int count = 0;
    for(int i=19;i<=1e18;i+=9){
        if(digitsum(i)==10){
            count++;
        }
        if(count==k){
            cout<<i;
            break;
        }
    }

    return 0;
}