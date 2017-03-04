#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
long long N,i,l,s;
cin>>N;
while(N--){
    string a;
    cin>>a;
    l = strlen(a.c_str());
    for(i=0;i<l;i++){
        s = int(a[i]) - 96 + int(a[l-i-1]) - 96;
        if(s>26){
            s = s - 26;
        }
        cout<<char(s+96);
    }
    cout<<endl;
}
return 0;
}



