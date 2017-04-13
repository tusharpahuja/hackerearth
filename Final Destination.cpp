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
string a;
long long l,i,x=0,y=0;
cin>>a;
l = strlen(a.c_str());
for(i=0;i<l;i++){
    if(a[i]=='U'){
        y++;
    }
    else if(a[i]=='D'){
        y--;
    }
    else if(a[i]=='L'){
        x--;
    }
    else if(a[i]=='R'){
        x++;
    }
}
cout<<x<<" "<<y;
return 0;
}







