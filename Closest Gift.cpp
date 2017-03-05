#include<iostream>

using namespace std;

bool isprime(long long n){
    long long i;
    for(i=2;i*i<=(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
long long n,i,d1=1e9,d2=1e9;
cin>>n;
for(i=n-1;i>1;i--){
    if(isprime(i)){
        d1 = (n-i);
        break;
    }
}
for(i=n;;i++){
    if(isprime(i)&& (i>1)){
        d2 = (i-n);
        break;
    }
}
if(d1<d2){
    cout<<d1;
}
else{
    cout<<d2;
}
return 0;
}
