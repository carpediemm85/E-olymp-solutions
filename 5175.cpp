#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if(1<=a && a<=pow(10,9)) 
        {
            cout<<a%10<<endl;
        }
    return 0;
}