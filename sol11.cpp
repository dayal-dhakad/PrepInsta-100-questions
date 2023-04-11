// Sum of digits of a number

#include<iostream>
using namespace std;
 
 
int main(){
 
 int num = 89;
 int sum = 0;
int digit;

while (num != 0)
{
    digit = num%10;
    sum += digit;

    num = num/10;

}


 cout<<sum;
 
  
  
return 0;
}