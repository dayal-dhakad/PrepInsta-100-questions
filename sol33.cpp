//Octal to Decimal Conversion

#include<iostream>
#include<math.h>
using namespace std;
 
int getDecimal(long long num){

    int base  = 8;
    int decimal = 0;
    int i = 0;
    

    while(num!=0){
        int digit = num%10;
        decimal += digit* pow(base, i);
        i++;
        num = num/10;
    }
    return decimal;
}
 
int main(){
 
 long long num = 462;

 cout<< getDecimal(num);
  
  
return 0;
}