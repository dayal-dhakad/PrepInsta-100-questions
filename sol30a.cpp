//lcm using hcf
#include<iostream>
using namespace std;
 
 
int main(){
 
 int num1 = 12, num2 = 14, hcf= 1, lcm= 1;

 for (int i = 1; i <= num1 || i<=num2; i++)
 {
    if (num1%i==0 && num2%i==0)
    {
        hcf = i;
    }
    
 }
  lcm = (num1*num2)/hcf;
  cout<<"Lcm is "<<lcm;
  
  
return 0;
}