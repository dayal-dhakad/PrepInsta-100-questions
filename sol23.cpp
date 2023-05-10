//Perfect number

#include<iostream>
using namespace std;
 
 
int main(){
 
int n = 28;
int sum = 0;

for (int i = 1; i < n; i++)
{
    if(n%i==0){
        sum+=i;
    }
}
if (n==sum)
{
    cout<< n<< " is a perfect number";
}

  
  
return 0;
}