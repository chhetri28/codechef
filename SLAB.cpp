#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll tax=0;
        ll net=0;
        if(n<=250000){
            tax+=0; 
        }
        else if(n>250001 and n<=500000){
            tax+=0.05*(n-250000);
        }
        else if(n>500001 and n<=750000){
            tax+=0.10*(n-500000)+0.05*(500000-250000);
        }
        else if(n>750001 and n<=1000000){
            tax+=0.15*(n-750000)+0.10*(750000-500000)+0.05*(500000-250000);
        }
        else if(n> 1000001 and n<=1250000){
            tax+=0.20*(n-1000000)+0.15*(1000000-750000)+0.10*(750000-500000)+0.05*(500000-250000);
        } 
        else if(n>1250001 and n<=1500000){
            tax+=0.25*(n-1250000)+0.20*(1250001-1000000)+0.15*(1000000-750000)+0.10*(750000-500000)+0.05*(500000-250000);
        }
        else{
            tax+=0.30*(n-1500000)+0.25*(1500000-1250000)+0.20*(1250001-1000000)+0.15*(1000000-750000)+0.10*(750000-500000)+0.05*(500000-250000);
        }
        net=n-tax;
        //cout<<tax<<endl;
        cout<<net<<endl;
    }
}