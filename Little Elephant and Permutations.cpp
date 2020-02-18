#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int  cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[j]>a[i]){
                    cnt1++;
                }
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                cnt2++;
            }
        }
        if(cnt1==cnt2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}