//NO. of digits in an integer
#include<iostream>
using namespace std;
 
 
int main(){
 int num = 234344;
 int count = 0;

while (num!=0)
{
 
    num= num/10;
    count++;
}
cout<<"No. of digits in this integer is "<<count<<endl;  
  
return 0;
}