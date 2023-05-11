//decimal to binary

// Not working
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
 int num = 14;
 int answer= 0;
 int i = 0;
 int digit = 0;
 
 while (num!=0)
 {
    digit = num&1;
    answer += digit* pow(10, i);
    num = num>>1;
    i++;

 }
   cout<<answer;
  
return 0;
}