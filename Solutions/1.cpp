#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    if (10<=a && a<=99)
    {
        b=(a/10)%10;
        c=a%10;
        cout<<b<<" "<<c;
    }
    
    else{ 
        cout<<"Daxil edilen telebi odemir.";
    }
    return 0;
}