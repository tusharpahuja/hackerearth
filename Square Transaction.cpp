#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define ld long double
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
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
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
ll GCD(ll a,ll b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}
vl v1;

bool yoyo(const pair<ll,string> p1 ,const pair<ll,string> p2){
    return p1.first > p2.first;
}

ld func(ld x){
    return 2*(x*x) - 12*x + 7;
}

ld ter_ser(ll l,ll r){
    ld l1,l2,x;
    ll i;
    fo(i,220){
        l1 = (2*l+r)/3;
        l2 = (2*r+l)/3;
        if(func(l1)>func(l2)){
            l = l1;
        }
        else r = l2;
    }
    x = l;
    return func(x);

}

beg{
ll t,n,i,m,res,j,k,q,a,b,c,l=0,r=0,u=0,d=0,mr,ml,md,mu,co=0;
cin>>t;
vl v1,su,qu;
fo(i,t){
    cin>>a;
    l += a;
    v1.pb(a);
    su.pb(l);
}
cin>>q;
fo(i,q){
    cin>>c;
    d=0;
    qu.pb(c);
    fo(j,t){
        if(su[j]>=c){
            cout<<(j+1)<<endl;
            d=1;
            break;
        }
    }
    if(d==0)cout<<-1<<endl;
}


ret;
}


