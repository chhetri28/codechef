#include <bits/stdc++.h> 
#define ll long long
using namespace std; 
unsigned int fd(unsigned int n) 
{ 
    unsigned int count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,q;
		cin>>n>>q;
		ll a[n];
		ll cE(0),cO(0);
		for (ll i = 0; i <n; i++)
		{
			cin>>a[i];
			if(fd(a[i])%2==0){
				cE+=1;
			}
			else
			{
				cO+=1;
			}
		}
		ll p;
		for(int i=0;i<q;i++)
		{
			cin>>p;
			if(fd(p)%2==0){
				cout<<cE<<" "<<cO<<endl;
			}
			else
			{
				cout<<cO<<" "<<cE<<endl;
			}
			
		}
		
	}
} 