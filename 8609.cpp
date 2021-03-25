#include <iostream>
using namespace std;
int f(int n){
 
   if (n <= 1)
        return 1;
   else 
       return n+f(n-1);
}
int main(){
   
   float num;
   cin>>num;
   if(num - (int)num == 0){
   if(0<num && num<=1000){
        cout<<f(num);
   }
   else if( num == 0){
       cout<< 0 ;
   }
   else{
       cout<<"error";
   }
   }
   return 0;
}