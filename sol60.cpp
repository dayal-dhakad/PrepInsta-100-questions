 #include<bits/stdc++.h>
using namespace std;

// Recursive function for repeated subtraction HCF calculation
int getHCF(int num1, int num2)
{
   if (num1 == 0)
      return num2;

   if (num2 == 0)
      return num1;

   // base case
   if (num1 == num2)
      return num1;

   if (num1 > num2)
      return getHCF(num1 - num2, num2);

   return getHCF(num1, num2 - num1);
}

int main()
{
   int num1 = 3, num2 = 21, HCF, LCM;

   HCF = getHCF(num1, num2);
 
   LCM = (num1*num2)/HCF;

   cout<<"LCM of " << num1<< " and " << num2 << " is "<< LCM;

   return 0;
}