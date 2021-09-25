#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    if (1000<=a && a<=9999)
    {
        b=(a/100)%10;
        c=((a/10)%10)%10;
        
        if(b!=0){
        cout<<b<<c;}
        else{
            cout<<c<<endl;
        }
        
    }
    
    else{ 
        cout<<"Daxil edilen telebi odemir.";
    }
    return 0;
}