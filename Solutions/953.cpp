#include <iostream>
#include<math.h>
using namespace std;
int main()
{ long n,x,y,q;
cin>>n;
x=n/100 ;
y=n%10;
q=y%x ;
cout<<q;

    return 0;
}