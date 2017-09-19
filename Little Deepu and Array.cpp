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
#define tc(t) ll t; cin >> t; while(t--)
#define PI 3.1415926535897932384626
#define beg int main()
#define ret return 0
#define bye exit(0)
#define nxl <<endl
#define show cout<<
#define INF 0x3f3f3f3f
#define MAX 100005
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

ll arr[MAX];
ll tree[4*MAX];
ll lazy[4*MAX];
vpll v1;

ll query(ll ss,ll se,ll si,ll i,ll j){
    if(i>se || ss>j || ss>se) return INF;

    if(lazy[si]!=0){
        tree[si] += lazy[si];
        if(ss!=se){
            lazy[2*si+1] += lazy[si];
            lazy[2*si+2] += lazy[si];
        }
        lazy[si] = 0;
    }
    if(i<=ss && j>=se) return tree[si];

    ll mid = (ss+se)/2;
    return min(query(ss,mid,2*si+1,i,j),query(mid+1,se,2*si+2,i,j));
}

void update(ll ss,ll se,ll si,ll val,ll x){
    if(ss>se) return;

    if(lazy[si]!=0){
        tree[si] += lazy[si];
        if(ss!=se){
            lazy[2*si+1] += lazy[si];
            lazy[2*si+2] += lazy[si];
        }
        lazy[si] = 0;
    }
//    if(ss>se) return;
    if(tree[si]>x){
        tree[si] += val;
        if(ss!=se){
            lazy[2*si+1] += val;
            lazy[2*si+2] += val;
        }
        return;
    }
    if(ss==se) return;
    ll mid = (ss+se)/2;
    update(ss,mid,2*si+1,val,x);
    update(mid+1,se,2*si+2,val,x);
    tree[si] = min(tree[2*si+1],tree[2*si+2]);
    return;
}

ll build(ll ss,ll se,ll si){
    if(ss==se){
        tree[si] = v1[ss].F;
        return v1[ss].F;
    }
    ll mid = ss +(se-ss)/2;
    tree[si] = min(build(ss,mid,2*si+1),build(mid+1,se,2*si+2));
    return tree[si];
}

beg{
ll n,i,j,m,a;
cin>>n;
fo(i,n){
    cin>>arr[i];
    v1.pb({arr[i],i});
}
sortall(v1);
build(0,n-1,0);

cin>>m;
fo(i,m){
    cin>>a;
    update(0,n-1,0,-1,a);
}


for(i=0;i<n;i++){
    v1[i].F = query(0,n-1,0,i,i);
    swap(v1[i].F,v1[i].S);
}
sortall(v1);
fo(i,n){
    cout<<v1[i].S<<" ";
}


ret;
}
