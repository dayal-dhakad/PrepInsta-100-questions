//Perfect square in given range


#include<iostream>
#include<cmath>
using namespace std;
 
bool isPerfectSquare(int n){
   long long num = sqrt(n);
   if (num*num == n)
   {
    return true;
   }
   else{
    return false;
   }
}
 
int main(){

for (long long i = 2; i < 1000; i++)
{
    /* code */


 long long n = i;

 if(isPerfectSquare(n)){
    cout<<n<<" ";
 }
 else{
    //cout<<"false";
 }
}
return 0;
}