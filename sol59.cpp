//HCF using recursion

#include<iostream>
using namespace std;
 
int hcf(int num1, int num2){
    if (num1==0)
    {
        return num2;
    }
    if (num2==0)
    {
        return num1;
    }
    
    
    if (num1==num2)
    {
        return num1;
    }
    
    if (num1>num2)
    {
        return hcf(num1-num2, num2);
    }

    else{
        return hcf(num1, num2-num1);
    }
    
}
 
int main(){
 int num1 = 96;
 int num2 = 56;
//  int hcf = 1;

 cout<< hcf(num1, num2);
  
  //method 1
// for (int i = 2; i <= num1 || i<= num2; i++)
// {
//     if (num1%i==0 && num2%i==0)
//     {
//         hcf=i;
//     }
    
// }
// cout<<hcf;

//method 2

// while (num1!=num2)
// {
//     if (num1>num2)
//     {
//         num1-=num2;
//     }
//     else
//     {
//         num2-=num1;
//     }
   
// }
// cout<<num1;
  
return 0;
}