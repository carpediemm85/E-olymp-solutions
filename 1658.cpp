#include <iostream>

using namespace std;

int main(){

  float n = 0;
  long long int fac = 1;
  cin >> n;
  
  if(n - (int)n == 0)
  {
    if(0<=n && n<=20)
    
    {
        for (int i = 2; i <= n; i++)
        {
            fac *= i;
        }
    
    cout << fac<<endl;
    }
      
  }
else
{cout<<"error";}
  return 0;
}