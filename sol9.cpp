//prime number or not
#include<iostream>
using namespace std;
 
 
int main(){
 int num = 27;
int count = 0;
 for(int i= 2; i<num; i++){
    if(num%i == 0){
       
        count++;
    }
   
 }

 if(count>0){
 cout<<"Not a prime number";
 }
 else{
  cout<<"It is a prime number";
 }
  
  
return 0;
}