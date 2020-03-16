#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int m,n;
        cin>>n>>m;
        int a[n],b[n];
        for (size_t i = 0; i <n; i++)
        {
            cin>>a[i];
        }
        for (size_t i = 0; i <n; i++)
        {
            cin>>b[i];
        }
        unordered_map<int,int>mp;
        for (size_t i = 0; i < n; i++)
        {
            mp[a[i]]+=b[i];
        }
        unordered_map<int,int>:: iterator it;
        // for(it=mp.begin();it!=mp.end();it++){
        //     cout<<it->first<<" "<<it->second;
        // }
        int min=INT_MAX;
        for(auto e:mp)
        {
            if(e.second<min){
                min=e.second;
            }
        }
        cout<<min<<endl;      
    }
    
}