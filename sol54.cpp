//power of number using recursion
#include<iostream>
using namespace std;
 
int powerr(int a, int b){
       if(b==0)           //   if (b<=1)
    {                     //   {
          return 1;       //     return a;
    }                     //   }
  
  return a*powerr(a, (b-1));
   
}
 
int main(){
 
 int num = 5;
 int power = 3;

 cout<<powerr(num, power);
//  int answer = 1;
//Iterative approach
//  for (int i = 1; i <=power; i++)
//  {
//     answer *= num;
//  }
 
//   cout<<answer;
  
return 0;
}