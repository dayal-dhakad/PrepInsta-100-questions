//prime numbers between 1 to 100;

#include<iostream>
using namespace std;
 
 bool isPrime(int num){
    for (int i = 2; i < num/2; i++)
    {
        if (num%i==0)
        {
            return false;
        }
        
    }
    return true;
 }
 
int main(){
 int num = 100;

 for (int i = 2; i < 100; i++)
 {
    if (isPrime(i))
    {
        cout<<i<<" ";
    }
    
 }
 
  
  
return 0;
}