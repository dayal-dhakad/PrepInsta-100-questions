//HCF highest common factor

#include<iostream>
using namespace std;
 
 
int main(){
 
 int num1 = 36, num2 = 60, HCF = 1;

 for (int i = 1; i <=num1 || i<=num2 ; i++)
 {
    if (num1%i==0 && num2%i==0)
    {
        HCF = i;
    }
    
 }
 
  cout<<"HCF of the two numbers "<<num1<<" & "<<num2<<" is "<<HCF<<endl;
  
return 0;
}