//Prime number in given range
#include<iostream>
using namespace std;
 

bool isPrime(int n){

    if (n <= 1)
    {
        return false;
    }
    

    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            return false;
        }
        
    }
    
    return true;

}
 
int main(){
 
int lower, upper;
lower = 1;
upper = 100;

for (int i = lower; i < upper; i++)
{
    bool ans = isPrime(i);
    if (ans == true)
{
    cout<<i<<" ";
}
}








  
return 0;
}