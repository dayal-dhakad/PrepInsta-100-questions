// Sum of First N Natural numbers

#include<iostream>
using namespace std;
 
 
int main(){
 
 int num;
 cin>>num;
int sum = 0;

//Solution 1
//  for (int i = 0; i <= num; i++)
//  {
//     sum += i;
//  }
//  cout<<"the sum is : "<<sum;

//Solution 2

sum = (num*(num+1))/2;

cout<<"the sum is : "<<sum;


  
  
return 0;
}