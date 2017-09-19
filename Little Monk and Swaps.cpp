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
ll n;
ll nodes[100007];
pll fin[100007];
ll inor[100007];
ll doe[100007];
ll tot=1;
struct node{
    ll data;
    ll ind;
    struct node* left;
    struct node* right;
};

struct node* newnode(ll data,ll ind){
    struct node* newn = (struct node*)malloc(sizeof(struct node));
    newn->data = data;
    newn->ind = ind;
    newn->right = NULL;
    newn->left = NULL;
    return newn;
}

struct node* create(ll ind){

    if(ind<=n){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = nodes[ind];
        temp->left = create(2*ind);
        temp->right = create(2*ind+1);
        return temp;
    }
    return NULL;
}

void inorder(struct node* root){

    if(root){
        inorder(root->left);
//        cout<<root->data;
        inor[tot++] = root->data;
//        tot++;
//        cout<<<<" ";
        inorder(root->right);
    }

}


beg{

ll i,j,t,a,b,c;
cin>>n;
for(i=1;i<=n;i++){
    cin>>nodes[i];
//    fin[i].F = nodes[i];
//    fin[i].S = i;
}
//clr(doe);
//struct node* root = newnode(nodes[1],1);
struct node* root = create(1);
inorder(root);
for(i=1;i<=n;i++){
    fin[i].F = inor[i];
    fin[i].S = i;
}
sort(fin+1,fin+n+1);
ll co=0;
ll vis[n+2];
clr(vis);
ll ans=0;
for(i=1;i<=n;i++){
    ll cyc_size = 0;
//    cout<<vis[i]<<" "<<fin[i].S<<endl;
    if(vis[i] || fin[i].S==i){
        continue;
    }
    j = i;
    while(!vis[j]){
        vis[j] = 1;
        j = fin[j].S;
        cyc_size++;
    }
    ans += (cyc_size-1);
}
cout<<ans<<endl;

ret;
}
