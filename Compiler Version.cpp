#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>

#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
string a;
int l,i,er=0,d=0;
while(getline(cin,a)){
    l = strlen(a.c_str());
    d=0;
    for(i=0;i<l;i++){
        er=0;
        if((a[i]=='/')&&(a[i+1]=='/')){
            d=1;
        }
        else if((a[i]=='-')&&(a[i+1]=='>')&&(d==0)){
            a[i] = '.';
            er=1;
        }
        if(d==1){
            cout<<a[i];
        }
        else if(er==1){
            cout<<a[i];
            i++;
        }
        else{
            cout<<a[i];
        }
    }
    cout<<endl;
}
return 0;
}






