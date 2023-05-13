//reversing a number
#include<iostream>
#include<math.h>
using namespace std;
 
 void reverse(int n){
    if (n<10)
    {
        cout<<n;
        return;
    }

    else{
      cout<<n%10;
      reverse(n/10);
   }
    
    

 }
 
int main(){
 int num = 123745;
 reverse(num);
/* 
 int bit = 0;
 int answer = 0;
 int i=0;
  
  while (num>0)
 {
    bit = num%10;
    answer = answer*10 + bit;
     i++;
    num = num/10;
 }

 cout<<answer;
 */
  
return 0;
}