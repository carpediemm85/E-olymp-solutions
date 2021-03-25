#include <iostream>

using namespace std;

int main() {

  int x = 0, tx = 0, r = 0;

  cin >> x;
    
    if(100<=x && x<=999){
  while (x > 0) {
    r = x % 10;
    tx = tx * 10 + r;
    x /= 10;
  }
}
    else{
        cout<<"Error";
    }
    
    cout << tx;
  return 0;
}