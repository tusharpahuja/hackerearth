#include<iostream>
#include<string.h>
using namespace std;
#include<stdlib.h>
int main(){
int T,i;
long long l,c=0;
cin>>T;
string a;
while(T--){
    cin>>a;
    c=0;
    l = strlen(a.c_str());
    for(i=0;i<l;i++){
        if((a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U')||(a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')){
            c++;
        }
    }
    cout<<c<<endl;
}
return 0;
}
