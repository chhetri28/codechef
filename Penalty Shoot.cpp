#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,p;
        int flag=0;
        cin>>n;
        ll a=0,b=0;
        ll ans=0,ac,bc;
        string s;
        cin>>s;//101011
              // ababab
        for(int i=0;i<n;i++){
            if(s[i]=='1' and i%2==0){
                a++;//a=2
            }
            else if(s[i]=='1' and i%2!=0){
                b++;//b=0
            }
        }
        if(n%2==0){
            ac=n/2;
            bc=n/2;
        }
        else{
            ac=n/2;//3/2=1
            bc=(n/2)+1;//(3/2)+1=2
        }
        for(int i=n;i<(2*n);i++){
            if(s[i]=='1' and i%2==0){
                a++;//a=3
            }
            else if(s[i]=='1' and i%2!=0){
                b++;//1
            }
            if(i%2==0){
                ac--;//0
            }
            else if(i%2!=0){
                bc--;//
            }
            if(a>(bc+b)|| b>(ac+a)){
                ans=i+1;
                break;
            }
        }
        if(ans==0){
            ans=2*n;
        }
        cout<<ans<<endl;
    }
}