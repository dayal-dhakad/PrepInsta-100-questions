//Factorial using recurssion

#include<iostream>
using namespace std;
 
 int factorial(int n){
    
    if (n==1)
    {
        return 1;
    }
    
    
    return n*factorial(n-1);
    
    
    
 }
 
int main(){
 int n= 7;

 cout<<factorial(n);
  
  
return 0;
}