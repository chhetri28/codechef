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
    OJ;
    FIO;
    int t;
    cin>>t;
    while(t--){
        int n,mn;
        cin>>n;
        mn=1e9;
        int check=0,x;
        map<int,int>mpa,mpb;
        for(int i=0;i<n;i++){
            cin>>x;
            check^=x;
            mpa[x]++;
            mn=min(mn,x);
        }
        for(int i=0;i<n;i++){
            cin>>x;
            check^=x;
            mpb[x]++;
            mn=min(mn,x);
        }
        if(check){
            cout<<-1<<endl;
            continue;
        }
        vector<int>a,b;
        a.clear(),b.clear();
        for(auto p:mpa){
            int ele=p.FF;
            int cnt=p.SS;
            if(mpb.find(ele)!=mpb.end()){
                int dx=min(cnt,mpb[ele]);
                mpa[ele]-=dx;
                mpb[ele]-=dx;
            }
        }
        for(auto p:mpa){
            int ele=p.FF;
            int cnt=p.SS;
            for(int i=0;i<=cnt/2;i++){
                b.PB(ele);
            }
        }
        reverse(b.begin(),b.end());
        ll res=0;
        for(int i=0;i<a.size();i++){
            res+=min(2*mn,min(a[i],b[i]));
        }
        cout<<res<<endl;
    }
}