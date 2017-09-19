#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked

#define ll long long
#define ld long double

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
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

bool yoyo(const pair<ll,string> p1 ,const pair<ll,string> p2){
    return p1.first > p2.first;
}

beg{
ll k,n,t,m,a,b,q,c,su=0,i,x,j,l;
//    long long n,m,i,j,q,a,b;
cin>>t;
while(t--){
    cin>>n>>m;
    ll vis[n+1];
    vector<ll> v1[n+1];
    ll levels[n+2];
    levels[1] = 1;
    map<ll,ll> ma;
    ma[1]++;
    fo(i,m){
        cin>>a>>b;
        v1[a].pb(b);
        v1[b].pb(a);
    }
    clr(vis);
    deque<ll> nodes;
    vis[1] = 1;
    nodes.push_back(1);
    while(nodes.size()>0){
        ll now = nodes.front();
        nodes.pop_front();
        for(i=0;i<v1[now].size();i++){
            if(!vis[v1[now][i]]){
                levels[v1[now][i]] = levels[now] + 1;
                nodes.push_back(v1[now][i]);
                vis[v1[now][i]] = 1;
                ma[levels[v1[now][i]]]++;
            }
        }
    }
    //cin>>x;
    cout<<levels[n]-1<<endl;
}
ret;
}


