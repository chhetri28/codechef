#include<bits/stdc++.h>
using namespace std;
void print(){
       int r,c;
       cin>>r>>c;
       vector<array<int,2>>move;
       move.push_back(((r+c)/2,(r+c)/2));
       move.push_back((1,1));
       for(int i=4;i<=8;i+=2){
           move.push_back((i/2,i/2));
           move.push_back((1,i-1));
           move.push_back((i-1,1));
           move.push_back((i/2,i/2));
       } 
        for(int i=10;i<=16;i+=2){
           move.push_back((i/2,i/2));
           move.push_back((i-8,8));
           move.push_back((8,i-8));
           move.push_back((i/2,i/2));
       }
       cout<<move.size()<<endl;
       for(array<int,2>a:move){
           cout<<a[0]<<" "<<a[1]<<endl;
       }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        print();
    }
    return 0;
}
