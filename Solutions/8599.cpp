#include <iostream>

using namespace std;

int main()
{ long n,ilk,son,orta,z,a;
cin>>n;
ilk=n/100;
son=n%10;
z=n-son;
a=z%100; 
orta=a/10;
cout<<ilk<<" "<<orta<<" "<<son; 

    return 0;
}