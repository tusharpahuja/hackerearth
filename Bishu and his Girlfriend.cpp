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

vector<ll> v[10000];
ll vis[10000];
ll dis[10000];

beg{
ll n,m,i,j,a,b;
cin>>n;
clr(vis);
fo(i,n-1){
    cin>>a>>b;
    v[a].pb(b);
    v[b].pb(a);
}
ll qu;
cin>>qu;
vl girls;
for(i=1;i<=qu;i++){
    cin>>a;
    girls.pb(a);
}
dis[1]=0;
vis[1]=1;
queue<ll> que;
que.push(1);
while(!que.empty()){
    ll now = que.front();
    que.pop();
    for(i=0;i<v[now].size();i++){
        if(vis[v[now][i]]==0){
           vis[v[now][i]] = 1;
           dis[v[now][i]] = dis[now] + 1;
           que.push(v[now][i]);
        }
    }
}
ll mini = LLONG_MAX;
ll ind = LLONG_MAX;
fo(i,qu){
    if(dis[girls[i]]<mini){
        ind = girls[i];
        mini = dis[girls[i]];
    }
    else if(dis[girls[i]]==mini){
        ind = min(ind,girls[i]);
        mini = dis[girls[i]];
    }
}
cout<<ind<<endl;

ret;
}


