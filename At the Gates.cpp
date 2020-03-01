#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>n>>k;
        char a;
        bool coin[n];
        for (size_t i = 0; i < n; i++)
        {
            cin>>a;
            if(a=='H'){
                coin[i]=true;
            }
            else{
                coin[i]=false;
            }
        }
        for (size_t i = 0; i <n-k; i++)
        {
            if(coin[n-i-1])
                for(int j=0;j<=n-i-1;j++)
                    coin[j]!=coin[j];
        }
        int cnt=0;
        for (size_t i = 0; i < n-k; i++)
        {
            if(coin[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}