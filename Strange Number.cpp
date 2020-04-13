#include<bits/stdc++.h>
using namespace std;
int countd(int x,int k){
    vector<int>prime;
    while(x%2==0){
        prime.emplace_back(2);
        x=x/2;
    }
    for(int i=3;i*i<=x;i++){
        while(x%i==0){
            x=x/i;
            prime.emplace_back((i));
        }
    }
    if(x>2){
        prime.emplace_back((x));
    }
    if(prime.size()>=k){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(countd(x,k)==1){
            cout<<"1\n";
        }
        else{
            cout<<"0\n";
        }
        return 0;
    }
}
