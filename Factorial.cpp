#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int z=0;
	    int c=5;
	    while((n/c)>0){
	        z=z+(n/c); 
	        c=c*5;
	    }
	    cout<<z<<endl;
	}
}