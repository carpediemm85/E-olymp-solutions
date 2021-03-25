#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    if (100<=a && a<=999)
    {
        b=(a/100);
        c=a%10;
        cout<<b<<c;
    }
    
    else{ 
        cout<<"Daxil edilen telebi odemir.";
    }
    return 0;
}