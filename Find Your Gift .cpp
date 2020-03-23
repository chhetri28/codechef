#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x(0),y(0);
        int f=2;
        for(int i=0;i<n;i++){
            if(s[i]=='L' and f!=0){
                x--;
                f=0;
            }
            else if(s[i]=='R' and f!=0){
                x++;
                f=0;
            }
            if(s[i]=='U' and f!=1){
                y++;
                f=1;
            }
            else if(s[i]=='D' and f!=1){
                y--;
                f=1;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
}