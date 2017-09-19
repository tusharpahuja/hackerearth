#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked

#define ll long long
#define ld long double

typedef pair<int, int>	pi;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pi>		vpi;
typedef vector<pll>		vpll;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define slen(s) strlen(s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define boostIO ios_base::sync_with_stdio(false), cin.tie(0)
#define PI 3.1415926535897932384626
#define beg int main()
#define ret return 0
#define bye exit(0)
#define nxl <<endl
#define show cout<<
# define INF 0x3f3f3f3f
ll GCD(ll a,ll b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

//ll bin_ser(ll low,ll high,ll key){
//
//    while(low<=high){
//        ll mid = (low+high)/2;
//        if(v1[mid]<key){
//            low = mid+1;
//        }
//        else if(v1[mid]>key){
//            high = mid-1;
//        }
//        else{
//            return (mid+1);
//        }
//    }
//    return -1;
//}

bool yoyo(const char p1 ,const char p2){
    return int(p1) > int(p2);
}

vector<ll> v[100005];
ll vis[100005];
ll dis[100005];
float edg1,edg2,ver1,ver2;

void dfs(ll s){
    ll i;
    vis[s] = 1;
    ver1++;
    edg1 += v[s].size();
    fo(i,v[s].size()){
        if(vis[v[s][i]]==0){
            dfs(v[s][i]);
        }
    }
}


beg{
ll n,m,i,j,a,b;
cin>>n>>m;
fo(i,m){
    cin>>a>>b;
    v[a].pb(b);
    v[b].pb(a);
}

ld den=-1;
ll fe,fv;
for(i=1;i<=n;i++){
    edg1=0;
    ver1=0;
    if(vis[i]==0){
        dfs(i);
        edg1 = edg1/2;
        if(den < (edg1/ver1)){
            den = edg1/ver1;
            fe = edg1;
            fv = ver1;
        }
    }
}
if(den>1){
    cout<<">1" nxl;
}
else{
    if(fe==fv){
        cout<<"1/1"<<endl;
        bye;
    }
    cout<<fe<<"/"<<fv<<endl;
}


ret;
}


