//Binary to decimal
#include<iostream>
#include<math.h>

using namespace std;
 
 
int main(){
 long long num = 10001111;
 long long temp = num;
 int decimal = 0;
 int i= 0;

 while (num!=0)
 {
   int digit =  num%10;
    decimal = decimal + digit* pow(2, i);
    num = num/10;
    i++;
 }
 
 
 cout<<"Decimal of "<<temp<<" is " <<decimal;
  
  
return 0;
}