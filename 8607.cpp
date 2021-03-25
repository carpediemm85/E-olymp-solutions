#include <iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n;
    m=((n/1000)*(n/1000))+(((n/100)%10)*((n/100)%10))+(((n/10)%10)*((n/10)%10))+((n%10)*(n%10));
    cout<<m;
}