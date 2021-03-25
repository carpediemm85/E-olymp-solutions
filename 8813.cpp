#include <iostream>

using namespace std;
int main()
{
     long a,b,c,s,v;
    cin>>a;
    cin>>b;
    cin>>c;
    s=2*(a*b+b*c+a*c) ;
    v=a*b*c ;
    cout<<s<<" "<<v;

    return 0;
}