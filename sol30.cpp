//LCM lowest common multiple
#include<iostream>
using namespace std;
 
 
int main(){
 
 int num1= 12, num2 = 14, lcm = 1;
 int max = (num1>num2)?num1 : num2;

 for (int i = max; i <= num1*num2; i++)
 { 
    if (i%num1==0 && i%num2 == 0)
    {
        lcm = i;
        break;
    }
    
 }
 
  cout<<"Lcm is "<<lcm<<endl;
  
  
  
return 0;
}