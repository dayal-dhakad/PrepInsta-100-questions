// C++ Program to check whether a number be expressed as a sum of two prime numbers

//errorrrrrr
#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int num){

    for (int i = 2; i < num/2; i++)
{
    if (num%i==0)
    {
        return false;
    }
}
return true;
}
 
int main(){
 int num =  11;
 int count = 0;
 vector<int>arr;
 
 for (int i = 2; i < num; i++)
 {
    if (isPrime(i))
    {
        arr.push_back(i);
    }
    
 }

for (int i = 0; i < arr.size(); i++)
{
    for (int j = 0; j <=i; j++)
    {
        if (arr[i]+arr[j]==num)
        {
            count++;
        }
       
    }
 
}
   if (count>0)
    {
        cout<<"Possible"<<endl;
    }
    
    else{
        cout<<"Not Possible";
    }

 


  
  
return 0;
}