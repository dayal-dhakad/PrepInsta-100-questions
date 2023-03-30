//sum of n natural numbers
//by using recursion

#include<iostream>
using namespace std;
 
int getSum(int num){
    
    //base condition
    if(num==0){
        return num;
    }
    
 int sum = num + getSum(num-1);
   return sum;
}

 
int main(){
 int num;
 cin>>num;

 cout<<getSum(num)<<endl;
  
  
return 0;
}