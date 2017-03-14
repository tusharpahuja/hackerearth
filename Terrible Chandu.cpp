#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>

#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
int t,l,i;
cin>>t;
string a;
while(t--){
    cin>>a;
    l = strlen(a.c_str());
    for(i=l-1;i>=0;i--){
        cout<<a[i];
    }
    cout<<endl;
}
return 0;
}






