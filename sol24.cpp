//Perfect square

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
 long long n = 16;

 if(isPerfectSquare(n)){
    cout<<"True";
 }
 else{
    cout<<"false";
 }
 
return 0;
}