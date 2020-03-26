#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        int cnt(0);
        for(int i=l;i<=r;i++){
            if(i%10==2 || i%10==3 || i%10==9){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}