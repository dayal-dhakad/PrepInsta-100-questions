//Abundant Number
#include<iostream>
using namespace std;
 
 
int main(){
 
 int n = 80;
 int sum= 0;

 for (int  i = 1; i <= n/2; i++)
 {
    if (n%i==0)
    {
        sum+=i;
    }
    
 }
 
 cout<<sum<<endl;
 if (sum>n)
 {
    cout<<n<<" is an abundant number";
 }
 else{
        cout<<n<<" is not an abundant number";

 }
 
  
  
return 0;
}