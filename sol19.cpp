//power of a number

#include<iostream>
#include<math.h>
using namespace std;
 
 
int main(){

int num = 7;
int power = 2;
int ans = 1;

cout<< pow(num, power)<<endl;

for (int i = 1; i <= power; i++)
{
    ans *= num;
}
cout<<ans;
  
  
return 0;
}