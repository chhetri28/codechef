#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        int cnt(0);
        for(int i=2;i*i<=x;i++){
            while(!(x%i)){
                cnt++;
                x/=i;
            }
            if(x>1){
                cnt++;
            }
            if(cnt>=k){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        return 0;
    }
}
