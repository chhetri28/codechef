#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt(0);
        for(int i=0;s[i];i++){
            if('0'<=s[i] and s[i]<='9'){
                cnt+=s[i]-'0';
            }
        }
        
        cout<<cnt<<endl;
    }
}   