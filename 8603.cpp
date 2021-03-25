#include <iostream>
using namespace std;
int main()
{
    long long n,m,l;
    cin>>n;
    
    m=n/100+(n/10)%10+n%10;
    l=(n/100)*((n/10)%10)*(n%10);
    
    cout<<m<<" "<<l;
}   