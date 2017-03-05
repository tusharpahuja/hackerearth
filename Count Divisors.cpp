#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
int l,r,k,one,two;
cin>>l>>r>>k;
if(l==r){
    if(l%k==0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    exit(0);
}
if(l%k==0){
    one = l;
}
else{
    one = l + (l%k);
}


if(r%k==0){
    two = r;
}
else{
    two = r + (r%k);
}

cout<<(((two-one)/k)+1);

return 0;
}
