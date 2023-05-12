//Binary to octal conversion
#include<iostream>
#include<math.h>
using namespace std;
 
 
int main(){
 
  long long num = 100011;
  int digit = 0;
  int answer = 0;
  int i= 0;
  int j=0;
  int octal = 0;
  int dig = 0;
  int bit = 0;

  while (num!=0)
  {
     digit = num%10;
     answer += digit*pow(2, i);
     i++;
     num = num/10;
  }

  while (answer!=0)
  {
     octal = answer%8;
     
     dig += octal* pow(10, j);
     j++;
     answer = answer/8;
  }
  
  
 cout<<dig;
  
return 0;
}