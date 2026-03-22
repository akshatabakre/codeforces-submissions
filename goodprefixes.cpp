#include<bits/stdc++.h>
using namespace std;


int main(){

    long long t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int good = 0;
        if(a[0]==0){
            good++;
        }
        for(int i=1;i<n;i++){
            long long sum = 0;
            long long m = 0;
            for(int j=0;j<=i;j++){
                sum += a[j];
                if(a[j]>m){
                    m = a[j];
                }
            }
            if(sum == 2*m){
                good++;
            }
        }
        cout<<"ans = "<<good<<endl;
    }

    return 0;
}