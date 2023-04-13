//power of a number

#include<iostream>
using namespace std;
 
 
int main(){

int num = 5;
int power = 2;
int ans = 1;

for (int i = 1; i <= power; i++)
{
    ans *= num;
}
cout<<ans;
  
  
return 0;
}