#include <iostream>
using namespace std;

int main (){
    int a,b;
    cin >> a;
    if(1<=a && a<=1000){
        cin >>b;
        if(1<=b && b<=1000){
            cout<<a*b<<endl;
            }
        
        }
    else{
    cout<<"Error";
    }
    return 0;
}