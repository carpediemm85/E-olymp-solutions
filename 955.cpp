#include <iostream>
#include<math.h>
using namespace std;

int main()
{ long n,a,b,c,d;
cin>>n;
a=n/1000;
d=n%10;
b=(n-(a*1000))/100;
c=((n-(a*1000+d))%100)/10;
cout<<(a+b+c+d)*(a+b+c+d);

    return 0;
}