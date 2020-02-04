#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=1;i<n+1;i++)
    cin>>a[i];
    
    int k=(1<<n)-1;// range
    int p=0;
    for(int i=1;i<k+1;i++)
    {
        int h = i;
        int s=0;
        int l=1;
        while(h>0){
            if(h&1){
                s=s+a[l];
            }
            l++;
            h = h>>1;
        }
        if(s==m)
        {
            cout<<"Yes"<<endl;
            p=1;
            break;
        }
    }
    if(!p)
    cout<<"No"<<endl;
    
}
return 0;
}
