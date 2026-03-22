#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){

    int n;
    cin>>n;
    while(n--){
        string word;
        cin>>word;
        if(word.length()<=10){
            cout<<word<<endl;
        } else {
            int l = word.length()-2;
            string w = "";
            w+=word[0];
            w+=to_string(l);
            w+=word[word.length()-1];
            cout<<w<<endl;
        }
    }

    return 0;
}