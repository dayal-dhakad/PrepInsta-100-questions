#include<iostream>
using namespace std;
 

int getSum(int num1, int num2){
    
    if(num2==num1){
        return num1;
    }

    return num2 + getSum(num1, num2-1);
}
 
int main(){
 
 int num1 = 4;
 int num2 = 10;


 cout<<getSum(num1, num2);
  
return 0;
}