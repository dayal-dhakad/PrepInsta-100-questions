//prime factors of a number   error!!!
#include<iostream>
using namespace std;
 
 
int main(){

int n = 100;
int count = 0;


for (int i = 2; i <n; i++)
{
     if(n%i==0){
       for (int j = 2; j <=i ; j++)
       {
          if (i%j == 0)
          {
             count++;
          }
       }
       
       if(count<1){
        cout<<i<<" ";
       }
          
     }
     
} 
  
return 0;
}