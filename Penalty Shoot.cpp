#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f=0;
        int cA=n;
        int cB=n;
        int sA=0,sB=0;
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                sA=sA+(s[i]-'0');
                cA--;
            }
            else{
                sB=sB+(s[i]-'0');
                cB--;
            }
            if(sA>sB+cB){
                cout<<i+1<<endl;
                break;
            }
            else if (sB>sA+cA)
            {
                cout<<i+1<<endl;
                break;
            }
            else if (sA==sB and i==2*n-1)
            {
                cout<<i+1<<endl;
                break;
            }
            
        }
        
    }

}