//Perfect number in a range

#include<iostream>
using namespace std;
 
 
int main(){
 
 for (int  i = 1; i < 1000; i++)
 {
    
int n = i;
int sum = 0;

for (int i = 1; i < n; i++)
{
    if(n%i==0){
        sum+=i;
    }
}
if (n==sum)
{
    cout<< n<< " is a perfect number"<<endl;
}
 }
  
  
return 0;
}