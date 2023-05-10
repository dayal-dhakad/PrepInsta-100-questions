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
 
 
 for (int i = 1; i < 10000; i++)
 {
    int n = i;
 int sum = 0;
 
 int temp = n;
 while(temp!=0){
    int x = temp%10;
    sum += factorial(x);
     temp = temp/10;
    
 }
 
  // cout<<"Sum is "<<sum<<endl;
   if (n == sum )
   {
  //   cout << n <<" is a strong number"<<endl; 
  cout<<n<<" ";
//    }
//    else{
//     cout << n <<" is not a strong number"<<endl; 
//    }
 }
 }
  
  
return 0;
}