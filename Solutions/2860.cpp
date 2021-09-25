#include <iostream>
using namespace std;

main() {
    
    long a, b, c, Ia, Ib;
    cin>>a;
    cin>>b;
    
    Ia = (a-1)*a/2;
    Ib = b*(b+1)/2;
    c = Ib - Ia;
    cout<<c;
      
    return 0;      
}