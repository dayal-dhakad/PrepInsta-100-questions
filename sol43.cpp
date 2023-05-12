//C++ Program to calculate addition of two Fractions
#include<iostream>
using namespace std;
 
int hcf(int num1, int num2){
    int gcd;
    for (int i =1; i <= num1 && i<= num2; i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            gcd = i;
        }
    }
    return gcd;
}
 
int main(){
 int num1, den1;
 int num2, den2;
  cout << "Enter numerator and denominator of first number : "; cin >> num1 >> den1;
  cout << "Enter numerator and denominator of first number : "; cin >> num2 >> den2;

 int lcm = (den1*den2)/hcf(den1, den2);
 
  cout<<lcm;
  int sum=(num1*lcm/den1) + (num2*lcm/den2);
    
    //normalizing numerator and denominator of result
    int num3=sum/hcf(sum,lcm);
    
    lcm=lcm/hcf(sum,lcm);
    
    //printing output
    cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<lcm;
    
    return 0;
}