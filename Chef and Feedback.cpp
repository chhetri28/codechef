#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int b=0;
        for(int i=0;i<n-2;i++){
            if(s[i]=='0' and s[i+1]=='1' and s[i+2]=='0' ||s[i]=='1' and s[i+1]=='0' and s[i+2]=='1'){
                b=1;
                break;
            }
        }
        if(b){
            cout<<"Good\n";
        }
        else{
            cout<<"Bad\n";
        }
    }
}