#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
string a,b;
long long l,i,s=0;
cin>>a;
l = strlen(a.c_str());
while(s<l){
    if(a[s]=='0'){
        b = a.substr(s,6).c_str();
        if(strcmp(b.c_str(),"000000")==0){
            cout<<"Sorry, sorry!";
            exit(0);
        }
        while(a[s]=='0'){
            s++;
        }
    }
    else{
        b = a.substr(s,6).c_str();
        if(strcmp(b.c_str(),"111111")==0){
            cout<<"Sorry, sorry!";
            exit(0);
        }
        while(a[s]=='1'){
            s++;
        }
    }
}
cout<<"Good luck!";
return 0;
}



