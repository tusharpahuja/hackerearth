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


struct node{
    ll data;
    struct node* left;
    struct node* right;
};

struct node* newnode(ll data){
    struct node* newn = (struct node*)malloc(sizeof(struct node));
    newn->data = data;
    newn->left = NULL;
    newn->right = NULL;
    return newn;
}

struct node* addt(struct node* root,ll data){
    if(root==NULL) return newnode(data);

    if(data<=root->data){
        root->left = addt(root->left,data);
    }
    else if(data>root->data){
        root->right = addt(root->right,data);
    }
    return root;
}

void preorder(struct node* root){
    if(root){
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
    return;
}

ll height(struct node* root){

    ll lh=0,rh=0;
    if(root==NULL){
        return 0;
    }
    lh = height(root->left);
    rh = height(root->right);
    return (max(lh,rh)+1);
}

beg{
ll n,t,i,j,q,a;
cin>>n;
//cin>>a;
struct node* root = NULL;
fo(i,n){
    cin>>a;
    root = addt(root,a);
}
cout<<height(root);

ret;
}
