#include <iostream>

using namespace std;
int main() {
int x,n,m,i;
cin>>x>>n>>m; // 2 3 100
x=x%m; //2
i=x; //2
for(int j=1; j<n; j++) { // 1 2
i=i*x%m; // 2*2%100=4 4*2%100=8
}
cout<<i%m;
}
