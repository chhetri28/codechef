#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
    //OJ;
    FIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        int maxi=INT_MIN;
        int mini=INT_MAX;
        if(n%2==0){
            for(auto x:mp){
                if(x.second>=maxi){
                    maxi=x.second;
                }
            }
            cout<<maxi<<endl;
        }else{
            for(auto x:mp){
                if(x.second<=mini){
                    mini=x.second;
                }
            }
            cout<<mini<<endl;
        }
        
    }
}