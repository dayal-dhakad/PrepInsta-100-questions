//Strong number

#include<iostream>
using namespace std;
 
 int factorial(int n){
    if (n<=1)
    {
        return n;
    }

    return  n * factorial(n-1);
    
 }

int main(){
 
 int n = 145;
 int sum = 0;
 
 int temp = n;
 while(temp!=0){
    int x = temp%10;
    sum += factorial(x);
     temp = temp/10;
    
 }
 
  //  cout<<"Sum is "<<sum<<endl;
  
   if (n == sum )
   {
     cout << n <<" is a strong number"; 
   }
   else{
    cout << n <<" is not a strong number"; 
   }


  
  
return 0;
}