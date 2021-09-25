#include <iostream>
using namespace std;

int main()
{
    long long a,b,x,y;
    cin>>a>>b;
    x=a/10+a%10;
    y=(a/10)*(a%10);
    cout<<x<<" "<<y;
}