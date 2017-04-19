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

ll bin_ser(vl v1,ll low,ll high,ll key){
    if(v1[high]<=key) return high;
    ll temp=0;
    while(low<=high){
        ll mid = low + abs(low-high)/2;
        if(v1[mid]>=key){
            temp = mid;
            high = mid-1;
        }
        else if(v1[mid]<key){
            low = mid+1;
        }
    }
    return temp;
}

bool yoyo(const pair<ll,string> p1 ,const pair<ll,string> p2){
    return p1.first > p2.first;
}

beg{
ll t,n,i,m,j,power,val,k,a,b,c,l=0,r=0,u=0,d=0,mr,ml,len,md,mu;
cin>>n;
vl v1,sum;
fo(i,n){
    cin>>a;
    v1.pb(a);
}

sortall(v1);

sum.pb(v1[0]);

for(i=1;i<n;i++){
    sum.pb(v1[i] + sum[i-1]);
}

cin>>c;

while(c--){
    cin>>power;
    u=0;
    d=0;
    fo(i,n){
        if(v1[i]>power){
            break;
        }
        else{
            u = i;
            d = sum[i];
        }
    }
    cout<<u+1<<" "<<d<<endl;
}



ret;
}


