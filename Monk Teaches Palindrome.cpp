#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>

#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
int t;
long long n,i,le,j,er=0;
cin>>t;
string a;
while(t--){
    cin>>a;
    er=0;
    le = strlen(a.c_str());
    i=0;
    j=le-1;
    while(i<=j){
        if(a[i]!=a[j]){
            er=1;
            break;
        }
        i++;
        j--;
    }
    if(er==1){
        cout<<"NO"<<endl;
    }
    else{
        if(le%2==0){
            cout<<"YES"<<" "<<"EVEN"<<endl;
        }
        else{
            cout<<"YES"<<" "<<"ODD"<<endl;
        }
    }
}
return 0;
}






