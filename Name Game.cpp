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
#define nxl cout<<endl
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
map<char,ll> m1;

ll isprime(ll p){
    ll i;
    for(i=2;i<=sqrt(p);i++){
        if(p%i==0){
            return 0;
        }
    }
    return 1;
}
ll tellme(char a){
    ll i= int(a)-1;
    ll j = int(a)+1;
    while(i>=65 && j<=122){
        if(m1[i]==1 && m1[j]!=1){
            return i;
        }
        else if(m1[j]==1 && m1[i]!=1){
            return j;
        }
        else if(m1[j]==1 && m1[i]==1){
            return min(i,j);
        }
        i--;
        if(i==96){
            i=90;
        }
        j++;
        if(j==91){
            j=97;
        }
    }
    while(i>=65){
        if(m1[i]==1){
            return i;
        }
        i--;
        if(i==96){
            i=90;
        }
    }
    while(j<=122){
        if(m1[j]==1){
            return j;
        }
        j++;
        if(j==91){
            j=97;
        }
    }
}

beg{
ll t,i,j;
cin>>t;

for(i=65;i<=122;i++){
    if(isprime(i)){
        m1[i] = 1;
    }
}

while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    fo(i,n){
        if(m1[s[i]]==1){
            continue;
        }
        ll a = tellme(s[i]);
        s[i] = char(a);
    }
    cout<<s<<endl;

}



ret;
}


