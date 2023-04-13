//Factorial of a program

#include<iostream>
using namespace std;
 
 
int main(){

int n = 6;
int multiplication = 1;
for (int i = 1; i <= n; i++)
{
    multiplication *= i;
}

  cout<<multiplication;
  
return 0;
}