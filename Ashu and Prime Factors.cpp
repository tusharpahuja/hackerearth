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


beg{

int t,x,n,i,j,m=1000000,mc=0;
int pr[1000004] = {0};
int val[1000004] = {0};
pr[0]=1;
pr[1]=1;

for(i=2;i*i<=m;i++){
    mc=0;
    if(pr[i]==0){
        mc++;
        pr[i]=i;
        for(j=2*i;j<=m;j+=i){
            if(pr[j]==0){
                pr[j]=1;
                mc++;
            }
        }
        val[i]=mc;
    }
}
for(i=1;i<=m;i++){
    if(pr[i]==0){
        val[i]=1;
    }
}

cin>>t;
while(t--){
    cin>>x;
    cout<<val[x]<<endl;
}


ret;
}


/*

 #include <stdio.h>


int p[1000100]={0};

int a[1000100]={0};
int main()
{


    int i,j,x,mc,n;

    p[0]=1;
    p[1]=1;
    for(i=2;i*i<=1000000;i++)
    {
        mc=0;
        if(p[i]!=0)
            continue;
        p[i]=1;
        mc++;
        for(j=2;j*i<=1000000;j++)
        {
            if(!p[i*j])
            {
                 p[j*i]=1;
                 mc++;
            }

        }
        a[i]=mc;
    }
    for(i=0;i<=1000000;i++)
	{
		if(p[i]==0 && a[i]==0)
		a[i]=1;
	}
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        printf("%d",a[x]);
        printf("\n");
    }
    return 0;

}

*/
