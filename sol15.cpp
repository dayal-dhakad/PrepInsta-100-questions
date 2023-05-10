//armstrong no. in given range

#include<iostream>
#include<math.h>
using namespace std;
 
bool isArmstrong(int n){
   
    int temp = n;
    
    int num = n;
    int count = 0;

    while (n != 0)
    {
        n = n / 10;
        count++;
        
    }

    int sum = 0;
    while (temp != 0)
    {
        int bit = temp % 10;
        sum += pow(bit, count);
        temp = temp / 10;
        
    }

    if(sum==num){
        return true;
        
    }
    else{
      return false;
    }
    

}

int main(){
 
int lower = 12;
int upper = 154;

for (int i = lower; i < upper; i++)
{
   bool ans = isArmstrong(i);

   if (ans == true)
   {
      cout<<i<<" ";
   }
   
}


  
  
return 0;
}