// Fibonacci series using iterative approach
#include<iostream>

using namespace std;



int main(){
    
  int n = 10;

  int a = 0, b= 1, c;

  cout<<a<<" "<<b<<" ";
  for(int i= 0; i<n-2; i++){
    
  
    c =  a+b;
    a = b;
    b = c;

   cout<<c<<" ";

  }


  



    return 0;
}