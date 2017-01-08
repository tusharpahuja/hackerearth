#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
using namespace std;

int main(){
long long t,n,i;
cin>>t;
long long a[t];
for(i=0;i<t;i++){
    cin>>a[i];
}
n=0;
while(n<t){
    for(i=1;i<=a[n];i++){
        if(i%3==0 & i%5==0){
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%3==0){
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0){
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    n++;
}
return 0;
}







