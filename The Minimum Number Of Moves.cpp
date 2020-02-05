#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int>a;
    int mini=INT_MAX;
    int sum=0;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a.push_back(t);
        if(a[i]<mini)mini=a[i];
        sum+=a[i]
    }
    cout<<sum-n*mini<<endl;
    }
}