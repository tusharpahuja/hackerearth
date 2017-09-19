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

beg{

ll n,t,a,b,i,j,c;
cin>>n>>c;
ll parent[n+1],color[n+1];
parent[1] = 0;
ll arr[n+1];
clr(parent);
for(i=2;i<=n;i++){
    cin>>arr[i];
    if(i!=0){
        parent[i] = arr[i];
    }
}
fo(i,n){
    cin>>a;
    color[i+1] = a;
}
ll err=0;
//
//for(i=1;i<=n;i++){
//    cout<<parent[i]<<endl;
//}
//bye;

for(i=1;i<=n;i++){
    if(i==1){
        cout<<-1<<" ";
        continue;
    }
    while(1){
        ll j=i;
        ll col = color[j];
        while(color[parent[j]]!=col && parent[j]!=0){
            j = parent[j];
        }
        if(color[parent[j]]==col && parent[j]!=0){
            cout<<parent[j]<<" ";
        }
        else{
            cout<<-1<<" ";
        }
        break;
    }
}

ret;
}
