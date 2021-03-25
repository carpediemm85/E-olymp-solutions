#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n,m,c;
    cin>>n;
    cin>>m;
    c = n-1;
    if(n<=pow(10,6) && m<=pow(10,6))
    {
        cout<<c*m*3<<endl;
    }
    return 0;

}