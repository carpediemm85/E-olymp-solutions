#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,d,x;
    cin>>a;
    if (10<=a && a<=99)
    {
        b=(a/10)%10;
        c=a%10;
        x = b+c;
        d = pow(x,2);
        cout<< d <<endl;
    }
    
    else{ 
        cout<<"Daxil edilen telebi odemir.";
    }
    return 0;
}