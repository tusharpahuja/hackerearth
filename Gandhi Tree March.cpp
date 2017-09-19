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


bool yoyo(const char p1 ,const char p2){
    return int(p1) > int(p2);
}

beg{

ll t,c,i,j;
cin>>t;
while(t--){
    string s;
    ll len;
    cin>>c;
    cin>>s;
    len = s.size();
    map<ll,vector<char> > m1;
    vector<pair<string,char> > vs;
    stack<pair<char,ll> > fs,se;
    m1[0].pb(s[0]);
    fs.push({s[0],0});
    ll le=0;
    i=1;
    while(i<len && fs.size()){
//        cout<<fs.top().F<<" "<<fs.top().S<<endl;
        if(s[i]=='('){
            i++;
            if(s[i]=='.'){
//                cout<<'.'<<" "<<fs.top().S<<endl;
                fs.push({'.',fs.top().S});
                i++;
            }
            else{
                m1[fs.top().S-1].pb(s[i]);
//                cout<<s[i]<<" "<<fs.top().S-1<<endl;
                fs.push({s[i],fs.top().S-1});
                i++;
            }
        }
        else if(s[i]==')'){
            while(fs.top().F=='.'){
                fs.pop();
                if(fs.size()==0){
                    break;
                }
            }
            fs.pop();
            if(fs.size()==0){
                break;
            }
            char yo = fs.top().F;
            ll ab = fs.top().S;
//            cout<<'.'<<" "<<ab<<endl;
//            fs.pop();
            fs.push({'.',ab});
            i++;
        }
        else if(s[i]=='.'){
            if(fs.top().F=='.'){
                fs.pop();
                if(fs.size()==0){
                    break;
                }
                i++;
            }
            else{
//                cout<<'.'<<" "<<fs.top().S+1<<endl;
                fs.push({'.',fs.top().S+1});
                i++;
            }
        }
        else{
            if(fs.top().F=='.'){
                m1[fs.top().S+1].pb(s[i]);
//                cout<<s[i]<<" "<<fs.top().S+1<<endl;
                fs.push({s[i],fs.top().S+1});
                i++;
            }
        }
    }
//    for(j=-2;j<=2;j++){
//        cout<<j<<" -------";
    if(m1[c].size()==0){
        cout<<"Common Gandhijee!"<<endl;
    }
    else{
        sortall(m1[c]);
        fo(i,m1[c].size()){
            cout<<m1[c][i];
        }
    }
    cout<<endl;
//    }
}



ret;
}
